// Write a Program to print the factorial of a number using for loop.
#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        factorial *= i;
    }
    printf("Factorial : %d",factorial);
    return 0;
}