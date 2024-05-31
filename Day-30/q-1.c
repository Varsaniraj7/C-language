// Write a Program to create Student Record System for n students using structure. Consider the below-mentioned attributes in the Student structure:
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school
#include<stdio.h>
struct Student{
    int stu_id;
    char stu_name[100];
    int age;
    char stu_course[100];
    char city[100];
    int stu_standard;
    char stu_school[100];
}s[100];
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        printf("Enter Student Id : ");
        scanf("%d",&s[i].stu_id);
        printf("Enter Student Name : ");
        scanf("%s",&s[i].stu_name);
        printf("Enter Student Age : ");
        scanf("%d",&s[i].age);
        printf("Enter Student Course : ");
        scanf("%s",&s[i].stu_course);
        printf("Enter Student City : ");
        scanf("%s",&s[i].city);
        printf("Enter Student Standard : ");
        scanf("%d",&s[i].stu_standard);
        printf("Enter Student School : ");
        scanf("%s",&s[i].stu_school);
    }
    for(int i = 0 ; i < n ; i++){
        printf("\n \n");
        printf("Student Id : %d \n",s[i].stu_id);
        printf("Student Name : %s \n",s[i].stu_name);
        printf("Student Age : %d \n",s[i].age);
        printf("Student Course : %s \n",s[i].stu_course);
        printf("Student City : %s \n",s[i].city);
        printf("Student Standard : %d \n",s[i].stu_standard);
        printf("Student School : %s \n",s[i].stu_school);
    }
    return 0;
}