// Write a Program to check whether a number is even or odd using the ternary operator.
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    (num % 2 == 0)? printf("Even Number") : printf("Odd Number");
    return 0;
}