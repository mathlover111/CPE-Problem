#include <stdio.h>
int GCD(int a,int b){
    while(b!=0){
        int temp= a%b;
        a = b;
        b = temp;
    }
    return a;
}
int main(){
int N, i, j;

    while (scanf("%d", &N) != EOF && N != 0) {
        int G = 0;

        for (i = 1; i < N; i++) {
            for (j = i + 1; j <= N; j++) {
                G += GCD(i, j);
            }
        }

        printf("%d\n", G);
    }

    return 0;
}
