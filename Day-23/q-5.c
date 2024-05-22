// Create a TSRN function called `calculateSquare()` that takes an integer as input and calculates its square. Print the result inside the function. Call this function from the `main()` function and display the square of a number.
#include<stdio.h>
void calculateSquare(int a){
    printf("Square of number : %d",a*a);
}
int main(){
    int a;
    printf("Enter any Number : ");
    scanf("%d",&a);
    calculateSquare(a);
    return 0;
}