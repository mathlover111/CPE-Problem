#include <stdio.h>
#include <string.h>

char c[2005][80];

int main() {
    int n, i, j, k;
    char a[80];
    char b[100];

    if (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%s", c[i]);
            fgets(b, sizeof(b), stdin);
        }


        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (strcmp(c[i], c[j]) > 0) {
                    strcpy(a, c[i]);
                    strcpy(c[i], c[j]);
                    strcpy(c[j], a);
                }
            }
        }

        k = 1;
        for (i = 0; i < n; i++) {
            if (i + 1 < n && strcmp(c[i], c[i + 1]) == 0) {
                k++;
            } else {
                printf("%s %d\n", c[i], k);
                k = 1;
            }
        }
    }

    return 0;
}
