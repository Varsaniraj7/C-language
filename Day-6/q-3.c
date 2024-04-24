//  Write C Program to find the third angle of a right triangle if two other angles are given.
#include<stdio.h>
int main(){
    int first,second,third;
    printf("Enter First Angle : ");
    scanf("%d",&first);
    printf("Enter Second Angle : ");
    scanf("%d",&second);
    third = 180-first-second;
    printf("First Angle : %d\n",first);
    printf("Second Angle : %d\n",second);
    printf("Third Angle : %d\n",third);
    return 0;
}