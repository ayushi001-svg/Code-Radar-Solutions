#include <stdio.h>

int main(){
    int a,n,bitStatus;
    scanf("%d",&a);
    scanf("%d",&n);
    bitStatus=(a>>n)&1;
    printf("%d",n,bitStatus);
    return 0;
}