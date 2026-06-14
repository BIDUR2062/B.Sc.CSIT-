#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct employee {
    char name[50];
    char address[50];
    int age;
    float salary;
} e1[50];

void toLowerCase(char str[]) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    int i, n, found = 0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter name: ");
        fgets(e1[i].name, 50, stdin);
        e1[i].name[strcspn(e1[i].name, "\n")] = '\0';

        printf("Enter address: ");
        fgets(e1[i].address, 50, stdin);
        e1[i].address[strcspn(e1[i].address, "\n")] = '\0';

        toLowerCase(e1[i].address);

        printf("Enter age: ");
        scanf("%d", &e1[i].age);

        printf("Enter salary: ");
        scanf("%f", &e1[i].salary);
        getchar();
    }

    for(i = 0; i < n; i++) {
        if(e1[i].age >= 40 && e1[i].age <= 50 &&
           strcmp(e1[i].address, "kathmandu") == 0) {

            printf("Employee Name: %s\n", e1[i].name);
            found = 1;
        }
    }

    if(!found) {
        printf("No employee has such details\n");
    }

    return 0;
}
