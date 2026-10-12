#include <stdio.h>
void set_a(char ch, int a[]) {
    int i;
    for (i = 1; i <= 10; i++) a[i] = 0;

    switch (ch) {
        case 'c': a[2]=1; a[3]=1; a[4]=1; a[7]=1; a[8]=1; a[9]=1; a[10]=1; break;
        case 'd': a[2]=1; a[3]=1; a[4]=1; a[7]=1; a[8]=1; a[9]=1; break;
        case 'e': a[2]=1; a[3]=1; a[4]=1; a[7]=1; a[8]=1; break;
        case 'f': a[2]=1; a[3]=1; a[4]=1; a[7]=1; break;
        case 'g': a[2]=1; a[3]=1; a[4]=1; break;
        case 'a': a[2]=1; a[3]=1; break;
        case 'b': a[2]=1; break;
        case 'C': a[3]=1; break;
        case 'D': a[1]=1; a[2]=1; a[3]=1; a[4]=1; a[7]=1; a[8]=1; a[9]=1; break;
        case 'E': a[1]=1; a[2]=1; a[3]=1; a[4]=1; a[7]=1; a[8]=1; break;
        case 'F': a[1]=1; a[2]=1; a[3]=1; a[4]=1; a[7]=1; break;
        case 'G': a[1]=1; a[2]=1; a[3]=1; a[4]=1; break;
        case 'A': a[1]=1; a[2]=1; a[3]=1; break;
        case 'B': a[1]=1; a[2]=1; break;
    }
}

int main() {
    int t, i, j, k;
    
    if (scanf("%d", &t) != EOF) {
        getchar(); 

        while (t--) {
            char s[205];
            int c[11] = {0}; 
            int b[11] = {0}; 

            if (fgets(s, sizeof(s), stdin) != NULL) {
                for (i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
                    int a[11] = {0};
                    set_a(s[i], a);

                    for (j = 1; j <= 10; j++) {
                        if (a[j] == 1 && b[j] == 0) {
                            c[j]++;
                        }
                        b[j] = a[j]; 
                    }
                }
            }

            for (k = 1; k <= 10; k++) {
                printf("%d%c", c[k], (k == 10) ? '\n' : ' ');
            }
        }
    }
    return 0;
}
