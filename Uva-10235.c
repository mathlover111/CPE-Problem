#include <stdio.h>
int isPrime(int x){
    int i;
    if(x < 2) return 0;
    for(i=2;i*i <= x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}

int main(){
    int N;
    while(scanf("%d",&N)!= EOF){
        int rev = 0;
        int temp = N;
        while(temp > 0){
        rev = rev*10 + (temp%10);
         temp /=10;
        }

       if(!isPrime(N)){
       printf("%d is not prime.\n",N);
       }else if(isPrime(rev) && N!= rev){
       printf("%d is emirp.\n",N);
       }else{
       printf("%d is prime.\n",N);

       }
    }
return 0;
}
