#include <stdio.h>
#include <string.h>

int main() {
  char email[100];
  printf("Enter the Email: ");
  scanf("%s", email);

  if (strchr(email, '@') && strchr(email, '.'))
    printf("Valid Email Format");
  else
    printf("Invalid Email Format");

  printf("\nBIDUR KHANAL\n");

  return 0;
}
