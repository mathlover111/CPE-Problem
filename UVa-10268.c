#include <stdio.h>
char line[1000000];
long long a[1000000];

int main() {
    long long x, s;
    int n, i, p, len;

    while (scanf("%lld", &x) != EOF) {
        getchar(); 
        gets(line);

        n = 0;
        p = 0;
        while (sscanf(line + p, "%lld%n", &a[n], &len) == 1) {
            p += len;
            n++;
        }

        s = 0;
        for (i = 0; i < n - 1; i++) {
            s = s * x + a[i] * (n - 1 - i);
        }

        printf("%lld\n", s);
    }

    return 0;
}
