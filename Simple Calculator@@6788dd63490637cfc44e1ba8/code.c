#include <stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op);
    case 1: '+';
    printf("%d",a+b);
    break;
    case 2: '-';
    printf("%d",a-b);
    break;
    case 3: '*';
    printf("%d",a*b);
    break;
    case 4: '/';
    printf("%d",a/b);
    break;
    default:
    printf("Error")
    return 0
}