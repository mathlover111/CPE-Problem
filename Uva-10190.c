#include <stdio.h>

int main() {
    long long n, m;

    while (scanf("%lld %lld", &n, &m) != EOF) {
        long long seq[100];
        int count = 0;
        int is_valid = 1;
        int i;

        if (m < 2 || n < 2 || n < m) {
            printf("Boring!\n");
            continue;
        }

        seq[count++] = n;

        while (n > 1) {
            if (n % m == 0) {
                n /= m;
                seq[count++] = n;
            } else {
                is_valid = 0;
                break;
            }
        }

        if (is_valid && seq[count - 1] == 1) {
            for (i = 0; i < count; i++) {
                printf("%lld%s", seq[i], (i == count - 1) ? "" : " ");
            }
            printf("\n");
        } else {
            printf("Boring!\n");
        }
    }

    return 0;
}
