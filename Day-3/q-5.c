// Calculate the average of three grades: take input from user and print average.

#include<stdio.h>
main(){
    int a,b,c,average;
    printf("Enter three grades : ");
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average : %d",average);
}