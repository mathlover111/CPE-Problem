#include <stdio.h>
int main(){
    int I;
    int bin[40];
    int len, ones, i;

    while(scanf("%d",&I)!= EOF && I!=0){
        len = 0;
        ones = 0;

    while(I>0){
        bin[len] = I%2;
        if(bin[len] == 1){
           ones++;
        }
        I /= 2;
        len++;
    }
    printf("The parity of ");
    for(i=len-1;i>=0;i--){
        printf("%d",bin[i]);
    }
     printf(" is %d (mod 2).\n",ones);
    }

    return 0;
}
