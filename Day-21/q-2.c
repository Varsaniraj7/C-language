// Write a C program to take a string input from the user and convert it to lowercase.
#include<stdio.h>
int main(){
    char name[100];
    printf("Enter Any string : ");
    gets(name);
    puts(strlwr(name));
    return 0;
}