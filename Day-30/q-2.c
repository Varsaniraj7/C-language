// Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name
#include<stdio.h>
struct Student{
    int emp_id;
    char emp_name[100];
    int emp_age;
    char emp_role[100];
    char emp_city[100];
    int emp_experience;
    char emp_company_name[100];
}s[100];
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        printf("Enter Employee Id : ");
        scanf("%d",&s[i].emp_id);
        printf("Enter Employee Name : ");
        scanf("%s",&s[i].emp_name);
        printf("Enter Employee Age : ");
        scanf("%d",&s[i].emp_age);
        printf("Enter Employee Role : ");
        scanf("%s",&s[i].emp_role);
        printf("Enter Employee City : ");
        scanf("%s",&s[i].emp_city);
        printf("Enter Employee Experience : ");
        scanf("%d",&s[i].emp_experience);
        printf("Enter Employee Company Name : ");
        scanf("%s",&s[i].emp_company_name);
    }
    for(int i = 0 ; i < n ; i++){
        printf("\n \n");
        printf("Employee Id : %d \n",s[i].emp_id);
        printf("Employee Name : %s \n",s[i].emp_name);
        printf("Employee Age : %d \n",s[i].emp_age);
        printf("Employee Role : %s \n",s[i].emp_role);
        printf("Employee City : %s \n",s[i].emp_city);
        printf("Employee Expeirence : %d \n",s[i].emp_experience);
        printf("Employee Company Name : %s \n",s[i].emp_company_name);
    }
    return 0;
}