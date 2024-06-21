// Develop a C program that defines a structure representing a house(with attributes like room_quantity,established_year,and city).List N number of house details using array of objects.
#include <stdio.h>
#include <string.h>

struct House {
    int room_quantity;
    int established_year;
    char city[50];
};

int main() {
    int n;

    printf("Enter the number of houses: ");
    scanf("%d", &n);
    struct House houses[n];
    for(int i = 0; i < n; i++) {
        printf("Enter details for house %d:\n", i + 1);
        
        printf("Enter room quantity: ");
        scanf("%d", &houses[i].room_quantity);
        
        printf("Enter established year: ");
        scanf("%d", &houses[i].established_year);
        
        printf("Enter city: ");
        scanf("%s", houses[i].city); 
    }

    printf("\nHouse Details:\n");
    for(int i = 0; i < n; i++) {
        printf("House %d:\n", i + 1);
        printf("Room Quantity: %d\n", houses[i].room_quantity);
        printf("Established Year: %d\n", houses[i].established_year);
        printf("City: %s\n", houses[i].city);
    }

    return 0;
}
