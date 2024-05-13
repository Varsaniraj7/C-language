// Write a program in [programming language of choice] that accepts user input to populate a 1D array and then finds all the even numbers within the array, computing their product.
#include<stdio.h>
int main(){
    int n,mul=1;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 == 0){
            mul *= arr[i];
        }
    }
     printf("Product of even element : %d\n",mul);
    return 0;
}