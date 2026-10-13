#include <stdio.h>
int main(){
    int n,i;
    long long s,d,a,b;
    if(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
        scanf("%lld %lld", &s, &d);

            if (s < d || (s + d) % 2 != 0) {
                printf("impossible\n");
        }else{
            a = (s+d)/2;
            b = (s-d)/2;

            printf("%lld %lld\n",a,b);
        }

        }
    }
    return 0;
}
