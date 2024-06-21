// Write a c program that defines a function to reverse a 3 digit number.
#include <stdio.h>
int reverseNumber(int num) {
    int hundreds, tens, units, reversed;
    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;
    reversed = units * 100 + tens * 10 + hundreds;
    return reversed;
}
int main() {
    int number, reversedNumber;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    if (number < 100 || number > 999) {
        printf("The number entered is not a three-digit number.\n");
        return 1;
    }
    reversedNumber = reverseNumber(number);
    printf("The reversed number is: %d\n", reversedNumber);
    return 0;
}
