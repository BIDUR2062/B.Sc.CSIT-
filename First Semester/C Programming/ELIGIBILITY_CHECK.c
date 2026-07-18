#include <stdio.h>

int main() {
    int age = 25;
    char gender = 'M';

    if ((age >= 18 && age <= 30) || gender == 'F') {
        printf("Eligible for the program.\n");
    } else {
        printf("Not eligible for the program.\n");
    }
    return 0;
}

