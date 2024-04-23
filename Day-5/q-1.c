// Write a Program to find the minimum number from the given 2 numbers using if else.
#include<stdio.h>
main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    if(a<b){
        printf("The minimum value is : %d",a);
    }
    else{
        printf("The minimum value is : %d",b);
    }
}