// **Question 5 (For Loop - Break):**
// Write a C program using a `for` loop to calculate the sum of the first 10 positive integers. However, if the sum becomes greater than 50, use the `break` statement to exit the loop.
#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        sum += i;
        
        if (sum > 50) {
            printf("Sum exceeds 50. Exiting loop.\n");
            break;
        }
    }

    printf("Sum of the first %d positive integers: %d\n", i - 1, sum);

    return 0;
}
