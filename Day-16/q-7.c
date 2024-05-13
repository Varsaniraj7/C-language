//  **Find the minimum element in an array.**
//    - Write a program to find the smallest element present in an array of integers.
#include<stdio.h>
int main(){
    int n,min;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] <= min){
            min = arr[i];
        }
    }
     printf("Minimum element in array : %d\n",min);
    return 0;
}