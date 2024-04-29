// Write a Program to find the maximum number from the given 4 numbers using the ternary operator.

#include<stdio.h>
int main(){
    int a,b,c,d;
    
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    printf("Enter Third Number : ");
    scanf("%d",&c);
    printf("Enter Forth Number : ");
    scanf("%d",&d);

    (a>b)  
    ? (a>c) ? (a>d) ? printf("A is Maximum") : printf("D is Maximum") : (c>d) ? printf("c is Maximum") : printf("D is Maximum") 
    : (b>c) ? (b>d) ? printf("B is Maximum") : printf("D is Maximum")  : (c>d) ? printf("C is Maximum") : printf("D is Maximum") 
    ;
    
    return 0;
}