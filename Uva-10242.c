#include <stdio.h>
#include <ctype.h>
int main(){
int i,c;
char keyboard[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while((c = getchar())!=EOF){
    c = tolower(c);

    if(c== ' ' || c== '\n'){
       putchar(c);
    }else{

    for(i=0; keyboard[i]!='\0';i++){
            if(keyboard[i]==c){
    putchar(keyboard[i-2]);
         break;
            }
        }
    }

}
    return 0;
}
