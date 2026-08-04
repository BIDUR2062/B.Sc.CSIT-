#include <ctype.h>
#include <stdio.h>


int main() {
  char id[100];
  int i = 0, valid = 1;
  printf("Enter the C Identifier: ");
  scanf("%s", id);

  if (!(isalpha(id[0]) || id[0] == '_'))
    valid = 0;

  while (id[i] != '\0') {
    if (!(isalnum(id[i]) || id[i] == '_')) {
      valid = 0;
      break;
    }
    i++;
  }

  printf(valid ? "Valid C Identifier" : "Invalid C Identifier");
  printf("\nBIDUR KHANAL\n");
  return 0;
}
