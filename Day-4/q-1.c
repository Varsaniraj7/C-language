//  Write a C program that calculates the sum of two numbers using the + operator. Input two numbers, add them, and print the result.
// Output : Enter two numbers: 5 3
// Sum: 8

#include<stdio.h>
main(){
    int a,b,ans;
    printf("Enter Any Two number : ");
    scanf("%d %d",&a,&b);
    ans=a+b;
    printf("Sum : %d",ans);
}