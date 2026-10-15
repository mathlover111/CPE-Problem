#include <stdio.h>
int a[505];
int main() {
    int t, r, i, j, temp, m, ans, diff;

    if (scanf("%d", &t) != EOF) {
        while (t--) {
            scanf("%d", &r);
            for (i = 0; i < r; i++) {
                scanf("%d", &a[i]);
            }

            for (i = 0; i < r - 1; i++) {
                for (j = i + 1; j < r; j++) {
                    if (a[i] > a[j]) {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            m = a[r / 2];

            ans = 0;
            for (i = 0; i < r; i++) {
                diff = a[i] - m;
                if (diff < 0) {
                    diff = -diff;
                }
                ans += diff;
            }

            printf("%d\n", ans);
        }
    }
    return 0;
}
