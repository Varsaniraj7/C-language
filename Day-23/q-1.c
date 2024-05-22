// Write a C program to define a TSRN function named `addNumbers()` that takes two integers as input and calculates their sum. Print the result inside the function. Call this function from the `main()` function and display the sum of two numbers.
#include<stdio.h>
void addNumbers(int a , int b){
    printf("Sum : %d",a+b);
}
int main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    addNumbers(a,b);
    return 0;
}