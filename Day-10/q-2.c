// Write a Program to count the total number of digits in a number.
#include<stdio.h>
int main(){
    int count=0 , n;
    printf("Enter Any number : ");
    scanf("%d",&n);
    do{
        n /= 10;
        count++;
    }while (n != 0);
    printf("Total number digit : %d",count);
    return 0;
}