#include <stdio.h>

int hex_bits[10] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2};

int count_b1(int x) {
    int cnt = 0;
    while (x > 0) {
        if (x % 2 == 1) cnt++;
        x /= 2;
    }
    return cnt;
}

int count_b2(int x) {
    int cnt = 0;
    while (x > 0) {
        cnt += hex_bits[x % 10]; 
        x /= 10;
    }
    return cnt;
}

int main() {
    int t, n;

    if (scanf("%d", &t) != EOF) {
        while (t--) {
            scanf("%d", &n);
            printf("%d %d\n", count_b1(n), count_b2(n));
        }
    }

    return 0;
}
