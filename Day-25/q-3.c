// Write a C program to find the factorial of a given positive integer using a user-defined function. The program should prompt the user to enter a positive integer and then calculate its factorial using a function called calculateFactorial(). Display the calculated factorial in the main function.
#include<stdio.h>
calculateFactorial(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact *= i;
   }
   return fact;
}
int main(){
    int n;
    printf("Enter Positive Number : ");
    scanf("%d",&n);
    printf("Factorial Number : %d",calculateFactorial(n));
    return 0;
}