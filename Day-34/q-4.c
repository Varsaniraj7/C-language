// Write a c program to find square of each elements of  an 1D array using Pointer.
#include <stdio.h>
void squareArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    squareArray(array, n);
    printf("The squared elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
