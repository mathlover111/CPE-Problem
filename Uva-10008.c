#include <stdio.h>
#include <ctype.h>
int main() {
    int n, c;
    int i, target;
    int count[26] = {0};
    int max = 0;

    if (scanf("%d", &n) != EOF) {
        getchar(); 

        while ((c = getchar()) != EOF) {
            if (isalpha(c)) {
                c = toupper(c);
                count[c - 'A']++;

                if (count[c - 'A'] > max) {
                    max = count[c - 'A'];
                }
            }
        }
    }
    for (target = max; target >= 1; target--) { 
        for (i = 0; i < 26; i++) {
            if (count[i] == target) {
                printf("%c %d\n", i + 'A', count[i]);
            }
        }
    }

    return 0;
}
