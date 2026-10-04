#include <stdio.h>
long long a(long long x, long long y) {
    long long n = x + y;
    return (n * (n + 1)) / 2 + x;
}

int main() {
    int T, i;

    if (scanf("%d", &T) != EOF) {
        for (i = 1; i <= T; i++) {
            long long x1, y1, x2, y2;
            
            scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

            long long steps1 = a(x1, y1);
            long long steps2 = a(x2, y2);

            printf("Case %d: %lld\n", i, steps2 - steps1);
        }
    }
    return 0;
}
