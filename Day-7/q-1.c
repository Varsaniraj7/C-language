// Write a Program to find the minimum number from the given 4 numbers using the ternary operator.

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

    (a<b)  
    ? (a<c) ? (a<d) ? printf("A is minimum") : printf("D is minimum") : (c<d) ? printf("c is minimum") : printf("D is minimum") 
    : (b<c) ? (b<d) ? printf("B is minimum") : printf("D is minimum")  : (c<d) ? printf("C is minimum") : printf("D is minimum") 
    ;
    
    return 0;
}