#include<stdio.h> 
int fibonacciSeries(int); 
void main () 
{ 
int n,f; 
printf("Enter the value of n?"); 
scanf("%d",&n); 
f = fibonacciSeries(n); 
printf("%d",f); 
} 
int fibonacciSeries (int n) 
{ 
if (n==0) 
{ 
return 0; 
} 
else if (n == 1) 
{ 
return 1; 
} 
else 
{ 
return fibonacciSeries(n-1)+fibonacciSeries(n-2); 
} 
} 
