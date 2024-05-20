// Write a C program to take two strings as input from the user and compare if they are equal. If they are equal, print "Strings are equal," else print "No, they are not equal."
#include<stdio.h>
int main(){
    char first[100],second[100];
    printf("Enter First name : ");
    gets(first);
    printf("Enter Second name : ");
    gets(second);  
    if (strcmp(first , second) == 0 ){
        printf("String is equal....");
    } else{
        printf("String are not equal....");
    }
    return 0;
}