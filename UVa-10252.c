#include <stdio.h>
#include <string.h>

char s1[1005], s2[1005];

int main() {
    int c1[26], c2[26];
    int i, count;

    while (gets(s1) != NULL && gets(s2) != NULL) {

        for (i = 0; i < 26; i++) {
            c1[i] = 0;
            c2[i] = 0;
        }

        for (i = 0; s1[i] != '\0'; i++) {
            if (s1[i] >= 'a' && s1[i] <= 'z') {
                c1[s1[i] - 'a']++;
            }
        }

        for (i = 0; s2[i] != '\0'; i++) {
            if (s2[i] >= 'a' && s2[i] <= 'z') {
                c2[s2[i] - 'a']++;
            }
        }

        for (i = 0; i < 26; i++) {
     
            count = (c1[i] < c2[i]) ? c1[i] : c2[i];
            
            while (count--) {
                putchar('a' + i);
            }
        }
        printf("\n");
    }

    return 0;
}
