#include <stdio.h>
char s[1005];
int c[256], t[256]; 

int main() {
    int i, j, swap, n, f = 0;

    while (gets(s) != NULL) {
        if (f) {
            printf("\n");
    }
        f = 1;

        n = 0;
        for (i = 32; i < 128; i++) {
            c[n] = i;
            t[n] = 0;
            n++;
    }

        for (i = 0; s[i] != '\0'; i++) {
            for (j = 0; j < n; j++) {
                if (c[j] == (int)s[i]) {
                    t[j]++;
                    break;
            }
        }
    }

        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (t[i] > t[j] || (t[i] == t[j] && c[i] < c[j])) {
                 
                swap = t[i];
                t[i] = t[j];
                t[j] = swap;

                swap = c[i];
                c[i] = c[j];
                c[j] = swap;
                }
            }
        }

        for (i = 0; i < n; i++) {
            if (t[i] > 0) {
                printf("%d %d\n", c[i], t[i]);
            }
        }
    }

    return 0;
}
