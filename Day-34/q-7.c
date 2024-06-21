// 100
// 81 81 
// 64 64 64
// 49 49 49 49
// 36 36 36 36 36
#include <stdio.h>

int main() {
    for (int i = 10; i >= 6; i--) {
        int square = i * i;        
        for (int j = 0; j <= 10 - i; j++) {
            printf("%d ", square);
        }
        printf("\n");
    }

    return 0;
}
