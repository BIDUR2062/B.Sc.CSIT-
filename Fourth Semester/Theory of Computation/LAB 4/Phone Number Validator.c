#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main() {
  char phone[20];
  int valid = 1;
  printf("Enter your Phone Number: ");
  scanf("%s", phone);

  if (strlen(phone) != 10)
    valid = 0;

  for (int i = 0; phone[i] != '\0'; i++)
    if (!isdigit(phone[i]))
      valid = 0;

  printf(valid ? "Valid Phone Number" : "Invalid Phone Number");
  printf("\nBIDUR KHANAL\n");
  return 0;
}
