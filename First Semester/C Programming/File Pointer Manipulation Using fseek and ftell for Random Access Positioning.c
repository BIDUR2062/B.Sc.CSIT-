#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("abc.txt", "r+");
    if (fp == NULL) {
        printf("Error: File not found\n");
        return 1;
    }
    fseek(fp, 5, SEEK_SET);
    printf("%d", ftell(fp));
    fclose(fp);
    printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
