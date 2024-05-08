// F E D C B A 
// E D C B A 
// D C B A 
// C B A 
// B A 
// A
#include <stdio.h>
int main() {
    for (int i = 65; i <= 70; i++) {
        for (int j = 70 ; j >= i; j--) {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}