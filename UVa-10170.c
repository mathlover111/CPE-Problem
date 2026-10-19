#include <stdio.h>
int main() {
    long long s, d;

    while (scanf("%lld %lld", &s, &d) != EOF) {

        while (d > s) {
            d -= s; 
            s++; 
        }
        printf("%lld\n", s);
    }

    return 0;
}
