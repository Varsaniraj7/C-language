// Write a C program that uses the assignment operators to increment a variable by 5 and then decrement it by 2. Print the final value of the variable. If value was 10 adding 5 = 15, then subtracting 2 =13
// Output:
// Final Value: 13


#include<stdio.h>
main(){
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    a += 5;
    a -= 2;
    printf("Final Value : %d",a);
}