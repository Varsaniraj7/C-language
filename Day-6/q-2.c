// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
#include<stdio.h>
int main(){
    float salary,hra,da,ta,ans;
    printf("Enter Your Salary : ");
    scanf("%f",&salary);
    hra = (salary * 10)/100 ;
    da = (salary * 8)/100 ;
    ta = (salary * 5)/100 ;
    ans = salary + hra + da + ta ;
    printf("Rs : %f",ans);
    return 0;
}