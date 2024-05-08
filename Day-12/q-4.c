// 10 9 8 7 6 5 4 3 2 1 
// 10 9 8 7 6 5 4 3 2 
// 10 9 8 7 6 5 4 3 
// 10 9 8 7 6 5 4
// 10 9 8 7 6 5 
// 10 9 8 7 6 
// 10 9 8 7 
// 10 9 8 
// 10 9 
// 10

#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 10 ; i++){
        for(int j = 10; j >= i ; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}