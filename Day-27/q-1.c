// Swap value using call by value.
#include<stdio.h>
void swap(int a , int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("A => %d \nB => %d",a,b);
}
int main(){
    int a = 10 ,b = 20;
    printf("A => %d \nB => %d\n",a,b);
    swap(a,b);
    return 0;
}