//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1 
#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 5 ; i++){
        for( int s = 1; s <= 5-i ; s++){
            printf(" ");
        }
        for(int j = i ; j >= 1 ; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}