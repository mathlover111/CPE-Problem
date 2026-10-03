#include <stdio.h>
#include <string.h>
int main(){
    char grid[105][105];
    int row_count = 0;
    int max_len = 0;
    int col, row;

    while(gets(grid[row_count])){
        int len = strlen(grid[row_count]);
        if(len > max_len){
            max_len = len;
        } 
        row_count++;
    }
    for(col= 0; col<max_len;col++){
        for(row = row_count-1;row>= 0;row--){
            int len = strlen(grid[row]);
            
            if(col < len){
                printf("%c", grid[row][col]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
