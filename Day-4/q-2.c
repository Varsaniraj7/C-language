// Write a C program that calculates the product of two numbers using the * operator. Input two numbers, multiply them, and print the result.
// Output:
// Enter two numbers: 4 6
// Product: 24

#include<stdio.h>
main(){
    int a,b,ans;
    printf("Enter Any Two number : ");
    scanf("%d %d",&a,&b);
    ans=a*b;
    printf("Product : %d",ans);
}