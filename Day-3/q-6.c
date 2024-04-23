// Ask the user to enter a number and multiply it by a constant integer

#include<stdio.h>
main(){
    int a;
    const int b=5;
    printf("Enter any value :");
    scanf("%d",&a);
    printf("Multiply by const value : %d",a*b);
}