#include <stdio.h>
int main() 
{
    FILE *fp;
    int ch;  
    fp = fopen("abc.txt", "r");
    if (fp == NULL) 
    {
        printf("File operation failed\n");
        return 1;
    }
    while (1)
    {
        ch = fgetc(fp); 
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
    printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
