#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char text[MAX], pattern[MAX];
    int current[MAX] = {0}, next[MAX] = {0};
    int i, j, n, m, found = 0;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter pattern: ");
    scanf("%s", pattern);

    n = strlen(text);
    m = strlen(pattern);

    current[0] = 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= m; j++)
            next[j] = 0;

        next[0] = 1;

        for (j = 0; j < m; j++) {
            if (current[j] && text[i] == pattern[j]) {
                next[j + 1] = 1;
            }
        }

        if (next[m]) {
            printf("Pattern found at index %d\n", i - m + 1);
            found = 1;
        }

        for (j = 0; j <= m; j++)
            current[j] = next[j];
    }

    if (!found){
        printf("Pattern not found.\n");
    }
    
    printf("\nBIDUR KHANAL\n");
    
    return 0;
}