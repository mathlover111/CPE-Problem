#include <stdio.h>
int main(){
int c;
int first = 1;
    while((c= getchar()) != EOF){
    if(c== '"'){
        if(first == 1){
            printf("``");
            first = 0;
        }else{
        printf("''");
        first = 1;
        }
        }else{

        putchar(c);

        }
    }
    return 0;
}
