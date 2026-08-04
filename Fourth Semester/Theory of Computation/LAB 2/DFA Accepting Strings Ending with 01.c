#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter the string: ");
  scanf("%s", str);
  int len = strlen(str);

  if (len >= 2 && str[len - 2] == '0' && str[len - 1] == '1')
    printf("Accepted by DFA");
  else
    printf("Rejected by DFA");
  printf("BIDUR KHANAL");
  return 0;
}
