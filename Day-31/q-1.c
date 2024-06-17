// Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
#include<stdio.h>
struct student
{
    int roll_no;
    char name[100];
    int chem_mark;
    int mathe_mark;
    int phy_mark;
    int total;
    float percentage;
}s[100];

int main(){
    for(int i = 1 ; i <= 5 ; i++){
        printf("Enter details of Student %d :\n",i);
        printf("Roll no => ");
        scanf("%d",&s[i].roll_no);
        printf("Name => ");
        scanf("%s",&s[i].name);
        printf("Chemistry => ");
        scanf("%d",&s[i].chem_mark);
        printf("Mathematics => ");
        scanf("%d",&s[i].mathe_mark);
        printf("Physics => ");
        scanf("%d",&s[i].phy_mark);
    }
    for(int i = 1 ; i <= 5 ; i++){
        printf("%s (%d)\n",s[i].name,s[i].roll_no);
        printf("Chemistry => %d\n",s[i].chem_mark);
        printf("Mathematics => %d\n",s[i].mathe_mark);
        printf("Physics => %d\n",s[i].phy_mark);
        s[i].total=s[i].chem_mark+s[i].phy_mark+s[i].mathe_mark;
        printf("Total => %d/300\n",s[i].total);
        s[i].percentage=s[i].total/3;
        printf("Percent => %f\n",s[i].percentage);
    }
    return 0;
}