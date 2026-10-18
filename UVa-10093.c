#include <stdio.h>
char s[10005];
int main() {
    int i, v, m, sum, n;

    while (gets(s) != NULL) {
        sum = 0;
        m = 1;
        
        for (i = 0; s[i] != '\0'; i++) {
            v = -1;
            if (s[i] >= '0' && s[i] <= '9') {
                v = s[i] - '0';
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                v = s[i] - 'A' + 10;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                v = s[i] - 'a' + 36;
            }

            if (v != -1) {
                sum += v;
                if (v > m) {
                    m = v;
                }
            }
        }

        for (n = m + 1; n <= 62; n++) {
            if (sum % (n - 1) == 0) {
                break;
            }
        }

        if (n <= 62) {
            printf("%d\n", n);
        } else {
            printf("such number is impossible!\n");
        }
    }
    return 0;
}
