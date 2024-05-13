// **Find the maximum element in an array.**
//    - Write a program to find the largest element present in an array of integers.
#include<stdio.h>
int main(){
    int n,max;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
     printf("Maximum element in array : %d\n",max);
    return 0;
}