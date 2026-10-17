#include <stdio.h>
int main() {
    long long n, s;

    while (scanf("%lld", &n) != EOF && n != 0) {
        while (n >= 10) {
            s = 0;
            while (n > 0) {
                s += n % 10; 
                n /= 10; 
            }
            n = s; 
        }

        printf("%lld\n", n);
    }

    return 0;
}
