// Write a C program to take a string input from the user and find its length.
#include<stdio.h>
int main(){
    char name[100];
    printf("Enter Any string : ");
    gets(name);
    printf("Length of string : %d",strlen(name));
    return 0;
}