// Write a Program to find if a given number is neutral or not using a ladder if else.
#include<stdio.h>
main(){
    int num;
    printf("Enter Any Number : ");
    scanf("%d",&num);
    if(num == 0){
        printf("This number is Neutral");
    }
    else if (num > 0){
        printf("This number is positive");
    }
    else{
        printf("This number is negative");
    }
}