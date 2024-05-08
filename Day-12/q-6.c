// 6
// 6 5
// 6 5 4
// 6 5 4 3
// 6 5 4 3 2
// 6 5 4 3 2 1
#include<stdio.h>
int main(){
    for(int i = 6 ; i >= 1 ; i--){
        for(int j = 6 ; j >= i ; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}