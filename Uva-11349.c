#include <stdio.h>
long long a[105][105];
int main() {
    
    int T, t, n, i, j;
    int is_sym;
    char s1[10], s2[10];

    if (scanf("%d", &T) != EOF) {
        for (t = 1; t <= T; t++) {
            scanf("%s %s %d", s1, s2, &n);

            is_sym = 1; 

            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    scanf("%lld", &a[i][j]);
                    if (a[i][j] < 0) {
                        is_sym = 0;
                    }
                }
            }
            if (is_sym) {
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        if (a[i][j] != a[n - 1 - i][n - 1 - j]) {
                            is_sym = 0;
                            break;
                        }
                    }
                    if (!is_sym) break;
                }
            }

            if (is_sym) {
                printf("Test #%d: Symmetric.\n", t);
            } else {
                printf("Test #%d: Non-symmetric.\n", t);
            }
        }
    }
    return 0;
}
