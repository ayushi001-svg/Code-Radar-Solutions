#include <stdio.h>

int main(){
    char name[100];
    char age[100];
    char hobby[100];
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s\n", name,age,hobby);
    return 0;
}