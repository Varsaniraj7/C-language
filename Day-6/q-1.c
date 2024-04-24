// Write a Program to convert temperature from degrees Celsius to Fahrenheit.
// Use formula for °C to °F is: ° F = ( °C × 9/5 ) + 32
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in Celcius : ");
    scanf("%f",&c);
    f = ( c *  1.8  ) + 32;
    printf("The temperature in Fahrenheit : %f",f);
    return 0;
}