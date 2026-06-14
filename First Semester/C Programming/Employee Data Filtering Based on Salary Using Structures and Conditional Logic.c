#include <stdio.h>
struct Employee {
    char name[50];
    double salary;
    char department[50];
    char address[100];
};
int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", employees[i].name);
        printf("Salary: ");
        scanf("%lf", &employees[i].salary);
        printf("Department: ");
        scanf(" %s", employees[i].department);
        printf("Address: ");
        scanf(" %s", employees[i].address);
    }
    printf("\nEmployees with salary greater than 1800000:\n");
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 1800000) {
            printf("%s\n", employees[i].name);
        }
    }
    printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
