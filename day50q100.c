//Q100: Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, len = 0;
    int first = 1;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {

            if (!first)
                printf(",");

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}