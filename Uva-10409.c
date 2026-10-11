#include <stdio.h>
#include <string.h>
int main(){
int n,i;
int top,west,north,tmp;
char a[100];

    while(scanf("%d",&n)!= EOF && n!=0){
      top=1, north=2, west=3;

     for(i=0;i<n;i++){
        scanf("%s",a);
        int tmp=top;
        if(a[0]=='n'){
           top = 7-north;
           north = tmp;
        }else if(a[0]=='s'){
           top = north;
           north = 7-tmp;
        }else if(a[0]=='w'){
            top = 7-west;
            west = tmp;
        }else if(a[0]=='e'){
            top = west;
            west = 7-tmp;
        }
     }
    printf("%d\n",top);
    }

return 0;
}
