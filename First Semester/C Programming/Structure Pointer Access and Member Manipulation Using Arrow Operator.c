#include <stdio.h>
#include <string.h>
struct student {
    char name[50];
    int roll_no;
    int marks;
}s1;
int main() {
    struct student *ptr = &s1;
    strcpy(s1.name, "Bidur");
    s1.roll_no = 100;
    s1.marks = 50;
    printf("Name: %s\n", (*ptr).name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %d\n", ptr->marks);
printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
    
}
