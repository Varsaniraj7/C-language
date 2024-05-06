// **Question 4 (for Loop - Continue):**
// Write a C program using a `for` loop to print all even numbers between 20 and 30, except for 14. Use the `continue` statement to skip printing the number 13.
#include <stdio.h>

int main() {
    int i;

    for (i = 20; i <= 30; i++) {
        if (i == 13) {
            continue; // Skip printing 13
        }
        if (i == 14 || i % 2 != 0) {
            continue; // Skip printing 14 and odd numbers
        }
        printf("%d \n", i);
    }


    return 0;
}
