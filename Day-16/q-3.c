// Implement a program in [programming language of choice] that allows the user to input values into a 1D array and calculates the average of these elements.
#include<stdio.h>
int main(){
    int n,sum=0,avg;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        avg = sum / n;
    }
    printf("Average of array elements : %d",avg);
    return 0;
}