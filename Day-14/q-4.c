// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1
#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int j = 1; j <= 2 * (5 - i); j++) {
            printf("  ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}
