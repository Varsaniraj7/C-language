// 4
// 3 3 
// 2 2 2
// 1 1 1 1
#include<stdio.h>
int main(){
    for(int i = 4 ; i >= 1 ; i--){
        for(int j = 4 ; j >= i ; j--){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}