// Write a Program to find square of each element from the given array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Squares element in array \n");
    for(int i =0 ; i < n ; i++){
        printf("%d\n",arr[i]*arr[i]);
    }
    return 0;
}