#include <stdio.h>
int cost[36];


int get_cost(int n, int b) {
    int total = 0;
    if (n == 0) return cost[0];
    
    while (n > 0) {
        total += cost[n % b];
        n /= b;
    }
    return total;
}

int main() {
    int t, q, n, i, b, c, min_c, k;

    if (scanf("%d", &t) != EOF) {
        for (k = 1; k <= t; k++) {

            if (k > 1) printf("\n");
            printf("Case %d:\n", k);


            for (i = 0; i < 36; i++) {
                scanf("%d", &cost[i]);
            }

            scanf("%d", &q);
            while (q--) {
                scanf("%d", &n);

                /* 找出 2 ~ 36 進位中的最低成本 */
                min_c = 2e9;
                for (b = 2; b <= 36; b++) {
                    c = get_cost(n, b);
                    if (c < min_c) {
                        min_c = c;
                    }
                }

                /* 印出所有達到最低成本的進位制 */
                printf("Cheapest base(s) for number %d:", n);
                for (b = 2; b <= 36; b++) {
                    if (get_cost(n, b) == min_c) {
                        printf(" %d", b);
                    }
                }
                printf("\n");
            }
        }
    }

    return 0;
}
