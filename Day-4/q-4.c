// Write a C program that increments a variable by 3 and then multiplies it by 2 using assignment operators. Print the final value of the variable. If value was 5 adding 3 = 8 , further multiplying it to 2 = 16.
// Output:
// Final Value: 16


#include<stdio.h>
main(){
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    a += 3;
    a *= 2;
    printf("Final Value : %d",a);
}