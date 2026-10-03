#include <stdio.h>
int main(){
    int N,case_num = 1;
    while(scanf("%d",&N) != EOF){
        int b[105], used[20005]= {0};
        int is_b2 = 1, i, j;

        for(i = 0;i<N;i++){
            scanf("%d",&b[i]);

            if(b[i]<1 || (i>0 && b[i] <=b[i-1])){
                is_b2 =0;
            }
        }

        for(i=0;i<N && is_b2;i++){
            for(j=i;j<N;j++){
                if(used[b[i]+b[j]]++){
                    is_b2 =0;
                    break;
                }
            }
        }

     if (is_b2) {
            printf("Case #%d: It is a B2-Sequence.\n\n", case_num++);
        } else {
            printf("Case #%d: It is not a B2-Sequence.\n\n", case_num++);
        }
    }
    return 0;

}
