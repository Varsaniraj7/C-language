// Swap value using call by reference.
#include<stdio.h>
void swap(int *n1 , int *n2){
    int *n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;
    printf("A => %d \nB => %d",*n1,*n2);
}
int main(){
    int a = 10 , b = 20 ;
    printf("A => %d \nB => %d\n",a,b);
    swap(&a,&b);
    return 0;
}