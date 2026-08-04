#include <stdio.h>
#include <string.h>

int main() {
  char str[100], prefix[100], suffix[100], substring[100];
  printf("Enter a string: ");
  scanf("%s", str);
  printf("Enter a prefix: ");
  scanf("%s", prefix);
  printf("Enter a suffix: ");
  scanf("%s", suffix);
  printf("Enter a substring: ");
  scanf("%s", substring);

  if (strncmp(str, prefix, strlen(prefix)) == 0)
    printf("%s is a Prefix of %s\n", prefix, str);

  int lenStr = strlen(str);
  int lenSuffix = strlen(suffix);
  if (lenSuffix <= lenStr && strcmp(str + lenStr - lenSuffix, suffix) == 0)
    printf("%s is a Suffix of %s\n", suffix, str);

  if (strstr(str, substring))
    printf("%s is a Substring of %s\n", substring, str);

  printf("\nBIDUR KHANAL\n");

  return 0;
}
