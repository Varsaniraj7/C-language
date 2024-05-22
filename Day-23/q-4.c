// Define a TSRN function `calculateCube()` that takes an integer as input and calculates its cube. Print the result inside the function. Call this function from the `main()` function and display the cube of a number.
#include<stdio.h>
void calculateCube(int a){
    printf("Cube : %d",a*a*a);
}
int main(){
    int a;
    printf("Enter any Number : ");
    scanf("%d",&a);
    calculateCube(a);
    return 0;
}