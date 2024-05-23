// Convert celsius to fahrenheit using TSRS.
#include<stdio.h>
float convert(float celsius){
    // (C × 9/5) + 32
    return ((celsius*1.8)+32);
}
int main(){
    float celsius;
    printf("Enter Celsius : ");
    scanf("%f",&celsius);
    printf("%f",convert(celsius));
    return 0;
}