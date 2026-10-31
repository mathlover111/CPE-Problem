#include <stdio.h>
#include <string.h>

char names[100005][35];
char tmp[35];

int main() {
    int t, n, i, j, cnt, k;

    if (scanf("%d", &t) != EOF) {
        getchar();
        gets(tmp);

        for (k = 0; k < t; k++) {
            if (k > 0) printf("\n");

            n = 0;
            while (gets(names[n]) != NULL && names[n][0] != '\0') {
                n++;
            }

            for (i = 0; i < n - 1; i++) {
                for (j = i + 1; j < n; j++) {
                    if (strcmp(names[i], names[j]) > 0) {
                        strcpy(tmp, names[i]);
                        strcpy(names[i], names[j]);
                        strcpy(names[j], tmp);
                    }
                }
            }

            cnt = 1;
            for (i = 0; i < n; i++) {
            
                if (i + 1 < n && strcmp(names[i], names[i + 1]) == 0) {
                    cnt++;
                } else {
                  
                    printf("%s %.4f\n", names[i], (double)cnt * 100.0 / n);
                    cnt = 1;
                }
            }
        }
    }

    return 0;
}
