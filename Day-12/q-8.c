// 1
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15
#include <stdio.h>

int main() {
    int rows = 5; 
    int num = 1; 
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            printf(""); 
        }
        
        for (int j = 0; j <= i; j++) {
            printf("%2d ", num++);
            printf(" ");
        }
        
        printf("\n");
    }
    
    return 0;
}
