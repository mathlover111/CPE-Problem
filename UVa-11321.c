#include <stdio.h>

int a[10005];
int m;

int cmp(int x, int y) {
    int rx = x % m;
    int ry = y % m;

    if (rx != ry) {
        return rx < ry;
    }

    int ox = (x % 2 != 0); /* x 是否為奇數 */
    int oy = (y % 2 != 0); /* y 是否為奇數 */

    if (ox != oy) {
        return ox; 
    }


    if (ox) {
        return x > y;
    }

   
    return x < y;
}

int main() {
    int n, i, j, swap;

    while (scanf("%d %d", &n, &m) != EOF) {
        printf("%d %d\n", n, m);
        if (n == 0 && m == 0) break;

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        /* 若條件不符合 cmp，就進行交換 */
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (!cmp(a[i], a[j])) {
                    swap = a[i];
                    a[i] = a[j];
                    a[j] = swap;
                }
            }
        }

        for (i = 0; i < n; i++) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
