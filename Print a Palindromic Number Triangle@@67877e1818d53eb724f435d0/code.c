#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int k=a-1;;
    for(int i=0;i<a;i++){
        for(j=0;j<k;j++){
            printf(" ");
        }
        k++;
        for(int g=0;g<i+1;g++){
            printf("%d",g+1);
        }
        for(l=i;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
}