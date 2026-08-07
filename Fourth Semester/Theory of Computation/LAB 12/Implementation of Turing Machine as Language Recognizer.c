#include <stdio.h>
#include <string.h>

int main() {
    char tape[100];
    int i, j, found;

    printf("Enter the string: ");
    scanf("%s", tape);

    while (1) {
        found = 0;

       
        for (i = 0; tape[i] != '\0'; i++) {
            if (tape[i] == 'a') {
                tape[i] = 'X';
                found = 1;
                break;
            }
        }

       
        if (!found)
            break;

        
        for (j = i + 1; tape[j] != '\0'; j++) {
            if (tape[j] == 'b') {
                tape[j] = 'Y';
                break;
            }
        }

        
        if (tape[j] == '\0') {
            printf("Rejected\n");
            return 0;
        }
    }

    
    for (i = 0; tape[i] != '\0'; i++) {
        if (tape[i] == 'a' || tape[i] == 'b') {
            printf("Rejected\n");
            return 0;
        }
    }

    printf("Accepted\n");
    printf("\nBIDUR KHANAL\n");
    return 0;
}