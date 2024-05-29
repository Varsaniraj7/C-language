// Print value of array using scale of pointer.
#include<stdio.h>
int main(){
    int arr[] = { 1 , 2 , 3 , 4 };
    int *p = &arr;
    printf("%u %d\n",p,*p);
    printf("%u %d\n",p+1,*p+1);
    printf("%u %d\n",p+2,*p+2);
    printf("%u %d\n",p+3,*p+3);
    return 0;
}
