#include <stdio.h>

char g[105][105];
int ans[105][105];

int main() {
    int n, m, i, j, dx, dy, k = 0;

    while (scanf("%d %d", &n, &m) != EOF) {
        if (n == 0 && m == 0) break;

        k++;
        if (k > 1) printf("\n"); 

        for (i = 0; i <= n + 1; i++) {
            for (j = 0; j <= m + 1; j++) {
                ans[i][j] = 0;
            }
        }

        for (i = 1; i <= n; i++) {
            scanf("%s", &g[i][1]);
        }

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                if (g[i][j] == '*') {
                    for (dx = -1; dx <= 1; dx++) {
                        for (dy = -1; dy <= 1; dy++) {
                            ans[i + dx][j + dy]++;
                        }
                    }
                }
            }
        }

        printf("Field #%d:\n", k);
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                if (g[i][j] == '*') {
                    printf("*");
                } else {
                    printf("%d", ans[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
