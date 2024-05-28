// Find maximum value by returning pointer variable.
#include<stdio.h>
int *max(int *a, int *b){
    if(a < b){
        return a;
    } else{
        return b;
    }
}
int main(){
    int a = 10 , b = 20;
    printf("Maximum : %d",*max(&a,&b));
    return 0;
}