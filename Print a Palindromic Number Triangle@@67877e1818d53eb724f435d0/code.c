#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=0;j<a-i;j++){
            printf(" ");
        }
        for(int g=1;g<=i;g++){
            printf("%d",g);
        }
        for(int l=i-1;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}