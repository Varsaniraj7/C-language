// Find area of a rectangle using TSRS.
#include<stdio.h>
int area(int l, int b){
    return l*b;
}
int main(){
    int l,b;
    printf("Enter Lenght Number : ");
    scanf("%d",&l);
    printf("Enter Height Number : ");
    scanf("%d",&b);
    printf("Area of Recatangle : %d",area(l,b));
    return 0;
}