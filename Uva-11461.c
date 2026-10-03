#include <stdio.h>
int main(){
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF && (a != 0 || b != 0)){
        int count = 0;
        int i;
    for(i=1;i*i<=b;i++){

        if (i * i >= a) {
            count++;
        }
    }
    printf("%d\n",count);
    }
return 0;
}
