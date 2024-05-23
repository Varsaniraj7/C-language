// Find square using TSRS.
#include<stdio.h>
int square(int num){
    return num*num;
}
int main(){
    int num;
    printf("Enter Any Number : ");
    scanf("%d",&num);
    printf("Square of number : %d",square(num));
    return 0;
}