// Print value of array using array of pointer.
#include<stdio.h>
int main(){
    int arr[] = { 1 , 2 , 3 , 4 };
    int *p[4];
    for(int i = 0 ; i < 4 ; i++){
        p[i]=&arr[i];
        printf("%u %d\n",p[i],*p[i]);
    }
    return 0;
}