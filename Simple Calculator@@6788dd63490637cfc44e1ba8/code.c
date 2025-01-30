#include <stdio.h>
int main(){
    double a,b;
    char op;
    scanf("%lf %lf %c",&a,&b,&op);
    switch(op){
    case '+':
    printf("%.0lf",a+b);
    break;
    case  '-':
    printf("%.0lf",a-b);
    break;
    case  '*':
    printf("%.0lf",a*b);
    break;
    case  '/':
    if(b=0){
        printf("error");
    }else{
        printf("%.0lf",a/b);
    }
    break;
    }
    return 0;
}
    