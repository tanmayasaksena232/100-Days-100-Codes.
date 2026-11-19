//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[1000];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    /* Find the last space */
    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    /* Print initials of all names except surname */
    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" ");

    /* Print surname in full */
    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}