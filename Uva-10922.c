#include <stdio.h>
#include <string.h>
int main(){
char str[1005];

while(scanf("%s",str) != EOF && strcmp(str,"0")!= 0){
    int sum = 0;
    int degree = 0;
    int i;

    for(i=0;str[i]!='\0';i++){
        sum += (str[i]-'0');
    }
    if(sum % 9 == 0){
      degree=1;
      while(sum > 9){
        int temp = sum;
        sum = 0;
        while(temp > 0){
            sum += temp % 10;
            temp/=10;
        }
        degree++;
      }
      printf("%s is a multiple of 9 and has 9-degree %d.\n", str, degree);
    }else{

        printf("%s is not a multiple of 9.\n", str);
    }

}
return 0;
}
