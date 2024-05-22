// Write a TSRN function named `divideNumbers()` that takes two integers as input and calculates their division. Print the result inside the function. Handle the case when the divisor is zero. Call this function from the `main()` function and display the quotient.
#include<stdio.h>
void divNumbers(int a , int b){
    printf("Division : %d",a/b);
}
int main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    divNumbers(a,b);
    return 0;
}