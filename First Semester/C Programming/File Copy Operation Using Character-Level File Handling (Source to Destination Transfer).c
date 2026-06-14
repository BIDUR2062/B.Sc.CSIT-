#include <stdio.h>
int main() 
{
    FILE *source, *destination;
    int ch;  
    source = fopen("def.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }
    destination = fopen("ghi.txt", "w");
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    printf("File copied successfully.\n");
    fclose(source);
    fclose(destination);
printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
