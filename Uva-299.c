#include <stdio.h>
int main(){
    int N,L;
    int train[55];
    int a, b, c, temp, swaps;

    if(scanf("%d",&N)!= EOF){
        for(a=0;a<N;a++){
            scanf("%d",&L);
            for(b=0;b<L;b++){
                scanf("%d",&train[b]);
            }

     swaps = 0;

     for(b=0;b<L-1;b++){
        for(c=0;c<L-1-b;c++){
            if(train[c]>train[c+1]){
                temp = train[c];
                train[c] = train[c + 1];
                train[c+ 1] = temp;

            swaps++;
            }
        }
     }
     printf("Optimal train swapping takes %d swaps.\n", swaps);
        }
    }
    return 0;
}
