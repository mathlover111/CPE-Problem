#include <stdio.h>
int main() {
    int fib[45];
    int N, n, i, j;

    fib[0] = 1;
    fib[1] = 2;

    for (i = 2; i < 40; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    scanf("%d", &N);

    while (N--) {
        scanf("%d", &n);

        printf("%d = ", n);

        int start = 0;

        for (i = 39; i >= 0; i--) {
            if (fib[i] <= n) {
                start = i;
                break;
            }
        }

        for (j = start; j >= 0; j--) {
            if (n >= fib[j]) {
                printf("1");
                n -= fib[j];
            } else {
                printf("0");
            }
        }

        printf(" (fib)\n");
    }

    return 0;
}
