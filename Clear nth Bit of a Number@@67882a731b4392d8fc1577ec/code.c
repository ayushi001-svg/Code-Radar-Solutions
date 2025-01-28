#include <stdio.h>
int  main(){
    int num , n;
    scanf("%d %d",&n,&num);
    n&=(~(1<<num));
    printf("%d",n);
    return 0;
}