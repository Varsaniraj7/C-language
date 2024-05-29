// Print value of string using array of pointer.
#include<stdio.h>
int main(){
    char arr[] = { "raj"};
    char *p[4];
    for(int i = 0 ; i < 3 ; i++){
        p[i]=&arr[i];
        printf("%u %c\n",p[i],*p[i]);
    }
    return 0;
}