// Write a C program to take two strings as input from the user and concatenate them. Display the concatenated string
#include<stdio.h>
int main(){
    char first[100];
    char second[100];
    char full[100];
    printf("Enter First name : ");
    gets(first);
    printf("Enter Second name : ");
    gets(second);
    strcpy(full , strcat(first , second));
    puts(full);
    return 0;
}