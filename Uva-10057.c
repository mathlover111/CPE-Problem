#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
    return(*(int*)a - *(int*)b);
}
int a[1000005];
int main(){
    int n,i;
    while(scanf("%d",&n)!= EOF){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        qsort(a, n,sizeof(int), cmp);

        int mid1=a[(n-1)/2];
        int mid2=a[n/2];


        int count = 0;
        for (i = 0; i < n; i++) {
            if (a[i] >= mid1 && a[i] <= mid2) {
                count++;
            }
        }

     printf("%d %d %d\n", mid1, count, mid2 - mid1 + 1);
    }
    return 0;
}
