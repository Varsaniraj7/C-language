// Using recursion find factorial.
#include<stdio.h>
int factorial(int n){
    if(n == 0 || n ==1 ){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    printf("Enter Any Number : ");
    scanf("%d",&n);
    printf("Factorial : %d",factorial(n));
    return 0;
}