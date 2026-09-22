#include <stdio.h>
int main(){
    int i, j;
    int k, n, len; 
    
    while(scanf("%d%d", &i, &j) != EOF){
        int start = i;
        int end = j;
        int max_len = 0;

        if(start > end){
            start = j;
            end = i;
        }

        for (k = start; k <= end; k++) {
            n = k;
            len = 1; 
            
            while (n != 1) {
                if (n % 2 != 0) { 
                    n = 3 * n + 1;
                } else {          
                    n = n / 2;
                }
                len++;
            }
            
            if (len > max_len) {
                max_len = len;
            }
        }

        printf("%d %d %d\n", i, j, max_len);
    }
    return 0;
}
