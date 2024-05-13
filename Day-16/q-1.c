// Write a program in [programming language of choice] that initializes a 1D array and takes user input to populate its elements.
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
    return 0;
}