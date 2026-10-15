#include <stdio.h>
char g[105][105];
int m, n;
int check(int r, int c, int k, char ch) {
    int i, j;

    if (r - k < 0 || r + k >= m || c - k < 0 || c + k >= n) {
        return 0;
    }

    for (i = r - k; i <= r + k; i++) {
        for (j = c - k; j <= c + k; j++) {
            if (g[i][j] != ch) {
                return 0; 
            }
        }
    }

    return 1; 
}

int main() {
    int t, q, r, c, i, k, len;

    if (scanf("%d", &t) != EOF) {
        while (t--) {
            scanf("%d %d %d", &m, &n, &q);
            printf("%d %d %d\n", m, n, q); 

            for (i = 0; i < m; i++) {
                scanf("%s", g[i]);
            }

            while (q--) {
                scanf("%d %d", &r, &c);
                len = 1;
                for (k = 1; ; k++) {
                    if (check(r, c, k, g[r][c])) {
                        len = 1 + 2 * k; 
                } else {
                    break;      
            }
        }

                printf("%d\n", len);
            }
        }
    }
    return 0;
}
