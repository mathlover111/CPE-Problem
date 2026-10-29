#include <stdio.h>
char s1[35],s2[35];

int gcd(int a, int b){
    while(b!= 0){
        int t = a%b;
        a = b;
        b = t;
    }
    return a;
}
int main(){
    int n ,p , a, b, i;

    if(scanf("%d",&n) != EOF){
       for(p=1;p<=n;p++){
        scanf("%s %s", s1,s2);
        a=0;
        for (i = 0; s1[i] != '\0'; i++) {
                a = a * 2 + (s1[i] - '0');
            }

        b = 0;
        for (i = 0; s2[i] != '\0'; i++) {
                b = b * 2 + (s2[i] - '0');
            }

        if (gcd(a, b) > 1) {
                printf("Pair #%d: All you need is love!\n", p);
            } else {
                printf("Pair #%d: Love is not all you need!\n", p);
            }
       }


    }
return 0;
}
