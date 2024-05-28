// Find minimum value by returning pointer variable.
#include<stdio.h>
int *min(int *a, int *b){
    if(a > b){
        return a;
    } else{
        return b;
    }
}
int main(){
    int a = 10 , b = 20;
    printf("Minimum : %d",*min(&a,&b));
    return 0;
}