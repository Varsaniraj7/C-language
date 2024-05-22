// Define a TSRN function called `multiplyNumbers()` that takes two integers as parameters and calculates their multiplication. Print the result inside the function. Call this function from the `main()` function and display the multiplication of the two numbers.
#include<stdio.h>
void multiNumbers(int a , int b){
    printf("Multipication : %d",a*b);
}
int main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    multiNumbers(a,b);
    return 0;
}