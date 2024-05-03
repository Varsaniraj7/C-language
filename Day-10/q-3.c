// Write a Program to find the sum of a first and the last digit of a number.
#include<stdio.h>
int main(){
    int sum=0,n,first,last;
    printf("Enter any number : ");
    scanf("%d",&n);
    last = n % 10;
    first = n;
    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    sum = first + last;
    printf("Sum first an last :%d",sum);
    
    return 0;
}