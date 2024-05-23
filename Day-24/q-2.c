// Write a Program to find the length of the String by passing a string as an argument using UDF.
#include<stdio.h>
int length(char str[]){
    int len=0;
    for(int i = 0 ; str[i] != NULL ; i++){
        len++;
    }
    return(len);
}
int main(){
    char str[100];
    printf("Enter Any String : ");
    gets(str);
    printf("%d",length(str));
    return 0;
}