// Develop a program in [programming language of choice] that creates a 1D array based on user input and computes the sum of all its elements.
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    printf("Sum of array elements : %d",sum);
    return 0;
}