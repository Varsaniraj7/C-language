// Write a C program that calculates the sum of squares of all even numbers from 1 to a given positive integer `n`. Implement a user-defined function called `calculateSumOfSquares` that takes an integer `n` as input from user  and returns the sum of squares of all even numbers from 1 to `n`. Display the calculated sum in the `main` function use TSRS.
#include<stdio.h>
int calculateSumOfSquares(int num){
    int sum = 0 , square = 0; 
    for(int i = 0 ; i <= num ; i++){
        if(i % 2 == 0){
            square = i * i;
            sum += square;
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter Value : ");
    scanf("%d",&n);
    printf("Sum of even number square : %d",calculateSumOfSquares(n));
    return 0;
}