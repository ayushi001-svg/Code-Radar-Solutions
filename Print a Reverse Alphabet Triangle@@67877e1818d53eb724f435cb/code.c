#include <stdio.h>
int main(){
    int rows;
    for(int i=0;i<rows;i++){
        for(char ch='A'ch<='A'+(rows-i-1);ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}