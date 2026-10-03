#include <stdio.h>
void bangla(long long n){
    if(n >= 10000000){
      bangla(n/10000000);
      printf(" kuti");
      n %= 10000000;
    }
    if(n >= 100000){
      bangla(n/100000);
      printf(" lakh");
      n %= 100000;
    }
    if(n>= 1000){
       bangla(n/1000);
       printf(" hajar");
       n %= 1000;
    }
    if(n >= 100){
        bangla(n / 100);
        printf(" shata");
        n %= 100;
    }
    if(n > 0){
        printf(" %lld", n);
    }

}
int main(){
    long long n;
    long long case_num = 1;

    while (scanf("%lld", &n) != EOF) {

        printf("%4lld.", case_num++);

        if (n == 0) {
            printf(" 0");
        } else {
            bangla(n);
        }
        printf("\n");
    }

    return 0;

}
