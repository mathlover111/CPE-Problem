#include <stdio.h>
int main() {
    char key[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char a[1000];
    int i, j;

    while (fgets(a, sizeof(a), stdin) != NULL) {
        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] == ' ' || a[i] == '\n') {
                putchar(a[i]);
                continue;
        }

        int found = 0;
        for (j = 0; key[j] != '\0'; j++) {
            if (a[i] == key[j]) {

                putchar(key[j - 2]);
                found = 1;
                break;
        }
    }
           
    if (!found) {
        putchar(a[i]);
        }
    }
 }
    return 0;
}
