#include <stdio.h>
int main(){
    int i,j,rows;
    char ch='A';
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<rows-i-1;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%c ",ch+j);
        }
    printf("\n");
    }
    return 0;
}