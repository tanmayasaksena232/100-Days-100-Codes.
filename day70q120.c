//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    /* Convert first character to uppercase */
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }

    /* Convert first letter after every space to uppercase */
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' &&
            str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s", str);

    return 0;
}