#include <stdio.h>
int  main(){
    int n,num,newNum;
    scanf("%d",&n);
    scanf("%d",&num);
    newNum= num&~(1<<n); 
    printf("%d",newNum);
}