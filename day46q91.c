//Q91: Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[1000];
    int i, j = 0;
    char result[1000];

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
              str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
              str[i] == 'O' || str[i] == 'U')) {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}