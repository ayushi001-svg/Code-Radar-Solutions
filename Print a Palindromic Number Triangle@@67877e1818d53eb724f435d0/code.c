#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int k,i,g,l;
    k=a-1;
    for(i=0; i<a; i++)
    {
        for(j=0;j<k;j++)
        {
            printf(" ");
        }
        k++;
        for(g=0;g<i+1;g++)     
        {
            printf("%d",g+1);
        }
        for(l=i;l>0;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
return 0;
}