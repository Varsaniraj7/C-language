//  Print value using pointer.(Integer , Float and character)
#include<stdio.h>
int main(){
    int a = 10;
    int *p1 = &a;
    printf("%u\n",p1);
    float b = 10.265;
    float *p2 = &b;
    printf("%u\n",p2);
    char c = 'a';
    char *p3 = &c;
    printf("%u",p3);
    return 0;
}