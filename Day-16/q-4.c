// Create a program in [programming language of choice] that prompts the user to input values into a 1D array and identifies and displays all the odd numbers within the array.
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
    printf("Odd Number\n");
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 != 0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}