#include <stdio.h>
#include <string.h>

int main() {
  char word[20];
  char *keywords[] = {"int",   "float", "char",   "if",  "else",
                      "while", "for",   "return", "void"};
  int found = 0;
  printf("Enter the Keyword: ");
  scanf("%s", word);

  for (int i = 0; i < 9; i++)
    if (strcmp(word, keywords[i]) == 0)
      found = 1;

  printf(found ? "Keyword" : "Not a Keyword");
  printf("BIDUR KHANAL");
  return 0;
}
