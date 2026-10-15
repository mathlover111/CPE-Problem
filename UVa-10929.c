#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    int i, a, b;

    while (scanf("%s", s) != EOF && strcmp(s, "0") != 0) {
        a = 0; 
        b = 0; 
        for (i = 0; s[i] != '\0'; i++) {
            if (i % 2 == 0) {
                a += s[i] - '0'; 
            } else {
                b += s[i] - '0';
            }
        }
        if ((a - b) % 11 == 0) {
            printf("%s is a multiple of 11.\n", s);
        } else {
            printf("%s is not a multiple of 11.\n", s);
        }
    }

    return 0;
}
