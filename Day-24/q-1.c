// Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
#include<stdio.h>
int sum(int arr[],int n){
    int total = 0;
   for(int i = 0 ; i < n ; i++){
    total += arr[i];
   } 
   return total;
}
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements : \n");
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("%d",sum(arr,n));
    return 0;
}