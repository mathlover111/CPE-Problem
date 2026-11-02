#include <stdio.h> 
int main(){
    int T; //測資組數
    int a, b, c; //a,b = 範圍端點,c = 測資編號計數器
    int i, sum; // i = 迴圈變數,sum = 奇數總和
    
    if (scanf("%d", &T) != EOF) { //讀入測資組數T
        for(c = 1; c <= T; c++){ //對每組測資迴圈(c從1到T)
            scanf("%d%d", &a, &b); //讀入範圍的起點a和終點b
            
            sum = 0; //初始化總和為0(每組測資都要重置)
            
            for (i = a; i <= b; i++) { //從a到b逐一檢查每個數
                if (i % 2 != 0) {
                    sum += i; //如果是奇數,就加到sum裡
                }
            }
            printf("Case %d: %d\n", c, sum);
        }
    }
    return 0;
}
