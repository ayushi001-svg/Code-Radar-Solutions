#include <stdio.h>
int main(){
    float a,b;
    char op;
    scanf("%lf %lf %c",&a,&b,&op);
    switch(op){
    case '+':
    printf("%0.lf",a+b);
    break;
    case  '-':
    printf("%0.lf",a-b);
    break;
    case  '*':
    printf("%0.lf",a*b);
    break;
    case  '/':
    printf("0.lf",a/b);
    break;
    default:
    printf("error");
    return 0;
    }
}