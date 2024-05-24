// Write a C program to calculate the area of a rectangle using a user-defined function. Implement a function called calculateArea() that takes the length and width of the rectangle as inputs and returns the calculated area. Display the area in the main function.
#include<stdio.h>
int calculateArea(int w , int l){
    return w*l;
}
int main(){
    int w,l;
    printf("Enter Width : ");
    scanf("%d",&w);
    printf("Enter Length : ");
    scanf("%d",&l);
    printf("Area of Rectangle : %d",calculateArea(w,l));
    return 0;
}