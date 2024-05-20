// Write a C program to assign a string to a variable and display it to the user.
#include<stdio.h>
int main(){
    char name[100];
    strcpy(name , "hello world");
    puts(name);
    return 0;
}