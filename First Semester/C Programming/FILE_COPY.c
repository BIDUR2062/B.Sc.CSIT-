#include <stdio.h>

int main() 
{
    FILE *source, *destination;
    char ch;
    source = fopen("def.txt", "r");
    if (source == NULL) {
        printf("Error: Could not open source file 'def.txt'.\n");
        return 1;
    }
    destination = fopen("ghi.txt", "w");
    if (destination == NULL) {
        printf("Error: Could not open destination file 'ghi.txt'.\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully from 'def.txt' to 'ghi.txt'.\n");
    fclose(source);
    fclose(destination);

    return 0;
}
