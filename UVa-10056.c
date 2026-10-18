#include <stdio.h>
int main() {
    int s, n, k, idx;
    double p, q, a, r;

    if (scanf("%d", &s) != EOF) {
        while (s--) {
            scanf("%d %lf %d", &n, &p, &k);

            if (p == 0.0) {
                printf("0.0000\n");
            } else {
                q = 1.0 - p;

                a = p;
                for (idx = 0; idx < k - 1; idx++) {
                    a *= q;
                }

                r = 1.0;
                for (idx = 0; idx < n; idx++) {
                    r *= q;
                }

                printf("%.4f\n", a / (1.0 - r));
            }
        }
    }
    return 0;
}
