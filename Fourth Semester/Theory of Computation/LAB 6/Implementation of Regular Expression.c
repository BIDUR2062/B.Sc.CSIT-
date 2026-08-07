#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regex;
    char pattern[100];
    char text[100];

    printf("Enter Regular Expression: ");
    scanf("%s", pattern);

    printf("Enter String: ");
    scanf("%s", text);

    if (regcomp(&regex, pattern, REG_EXTENDED) != 0) {
        printf("Invalid Regular Expression!\n");
        return 1;
    }

    if (regexec(&regex, text, 0, NULL, 0) == 0)
        printf("String matches the regular expression.\n");
    else
        printf("String does not match the regular expression.\n");

    regfree(&regex);

    printf("\nBIDUR KHANAL\n");
    return 0;
}