#include <stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(sp<cp){
        printf("Loss");
    }
    else if(sp==cp){
        printf("No Profit No Loss");
    }
    return 0;
}