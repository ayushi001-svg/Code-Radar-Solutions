// Your code here...
#include<stdio.h>
int isSorted(int arr[],int n){
    int asc = 1, desc = 1;
    for(int i = 1; i<n; i++){
        if(arr[i]<arr[i-1]){
            asc=0;
        }
        of (arr[i]>arr[i-1]){
            desc=0;
        }
    }
    if (asc) return 1;
    if (desc) return -1;
    return 0;
}
int main(){
    int n=sizeof(arr)/sizeof(arr[0]);
    int result = isSorted(arr,n);
    if(result==1){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}
