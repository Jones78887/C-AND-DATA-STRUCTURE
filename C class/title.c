#include <stdio.h>
#include <ctype.h>

void convertToTitleCase(char *str) {
    int i = 0;

    // Capitalize the first character
    str[i] = toupper(str[i]);

    // Capitalize the first character after each space
    while (str[i] != '\0') {
        if (isspace(str[i])) {
            i++;
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertToTitleCase(str);

    printf("Title case string: %s\n", str);

    return 0;
}
