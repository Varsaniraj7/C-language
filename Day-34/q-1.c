// Create a c Program to check if a number is entered by the user is a positive or negative
#include<stdio.h>
int main(){
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    if(n>=0){
        printf("Number is Positive");
    }
    else{
        printf("Number is Negative");
    }
    return 0;
}
