// Calculate the area of a rectangle, take input from user length and width:  print area.

#include<stdio.h>
main(){
    int length,width,area;
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter width : ");
    scanf("%d",&width);
    area = length * width;
    printf("Area of rectangle : %d",area);
}