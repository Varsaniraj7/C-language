// 11
// 12 13
// 14 15 16
// 17 18 19 20
// 21 22 23 24 25
#include <stdio.h>

int main() { 
    int num = 11; 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%2d ", num++);
            printf(" ");
        }
        
        printf("\n");
    }
    
    return 0;
}