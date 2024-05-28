//  Find value of x using chain of pointer.
#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int **p2 = &p1;
    printf("%u %d\n",p1,*p1);
    printf("%u %u %d",p2,*p2,**p2);
    return 0;
}