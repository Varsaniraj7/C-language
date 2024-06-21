// Write a C program that writes any N number of employees name along with their role(designation) in a file called data.txt by taking input from user dynamically.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[100];
    char role[100];
};

int main() {
    int n;
    FILE *file;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    if (employees == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]%*c", employees[i].name); 

        printf("Enter role: ");
        scanf(" %[^\n]%*c", employees[i].role);
    }

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Could not open file\n");
        free(employees);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role: %s\n", employees[i].role);
        fprintf(file, "\n");
    }
    fclose(file);
    free(employees);
    printf("Employee details have been written to data.txt\n");

    return 0;
}
