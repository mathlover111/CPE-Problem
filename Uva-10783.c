#include <stdio.h>
int main(){
    int T;
    int a, b, c;
    int i, sum;
    
    if (scanf("%d", &T) != EOF) {
        for(c = 1; c <= T; c++){
            scanf("%d%d", &a, &b);
            
            sum = 0; 
            
            for (i = a; i <= b; i++) {
                if (i % 2 != 0) {
                    sum += i;
                }
            }
            printf("Case %d: %d\n", c, sum);
        }
    }
    return 0;
}
