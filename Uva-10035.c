#include <stdio.h>
int main(){
    unsigned int a,b;
    int carry, carry_count;

    while(scanf("%u %u",&a,&b)!= EOF && (a !=0 || b!=0)){
       carry = 0;
       carry_count = 0;

       while(a>0 || b>0){
        if((a%10) + (b%10) + carry >= 10){
            carry = 1;
            carry_count++;
        }else{
            carry = 0;
        }
        a /= 10;
        b /= 10;
       }
        if(carry_count == 0){
          printf("No carry operation.\n");
        }else if(carry_count == 1){
            printf("1 carry operation.\n");
        }else{
            printf("%d carry operations.\n",carry_count);
        }
    }
return 0;
}
