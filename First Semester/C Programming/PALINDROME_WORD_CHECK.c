#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];  
    int i, length;

    printf("Enter the word: ");
    scanf("%s", a);  

    length = strlen(a);  

    for (i = 0; i < length; i++) {
        b[i] = a[length - i - 1]; 
    }
    b[length] = '\0';

    if (strcmp(a, b) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
