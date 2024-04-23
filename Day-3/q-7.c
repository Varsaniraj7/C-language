// Calculate the area of a circle given the radius (constant value for pi)

#include<stdio.h>
main(){
    const float pi = 3.14;
    float radius;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float area =pi*radius*radius;
    printf("Area of circle : %f",area);
}