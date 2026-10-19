#include <stdio.h>
int a[3655];

int main() {
    int t, n, p, h, i, j, ans;

if (scanf("%d", &t) != EOF) {
    while (t--) {
        scanf("%d", &n);
        scanf("%d", &p);

            
        for (i = 1; i <= n; i++) {
            a[i] = 0;
        }

         
        for (i = 0; i < p; i++) {
            scanf("%d", &h);
            for (j = h; j <= n; j += h) {
                a[j] = 1;
            }
        }

          
        ans = 0;
        for (i = 1; i <= n; i++) {
              
            if (a[i] == 1 && i % 7 != 6 && i % 7 != 0) {
                ans++;
            }
        }

        printf("%d\n", ans);
    }
}

    return 0;
}
