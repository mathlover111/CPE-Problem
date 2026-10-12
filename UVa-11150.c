#include <stdio.h>
int main(){
    int N;

    while(scanf("%d",&N)!=EOF){
      int total = N;
      int empty = N;

      while(empty>=3){
        total += empty/3;
        empty = (empty/3) + (empty%3);

      }
     if(empty==2){
       total +=1;
     }
     printf("%d\n", total);
    }
    return 0;
}
