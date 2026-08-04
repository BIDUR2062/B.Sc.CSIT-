#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter the string: ");
  scanf("%s", str);

  if (strstr(str, "ab"))
    printf("Accepted by NFA");
  else
    printf("Rejected by NFA");
  printf("BIDUR KHANAL");
  return 0;
}
