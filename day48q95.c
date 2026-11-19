//Q95: Check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char str1[100], str2[100], temp[200];
    int len1 = 0, len2 = 0, i, j, rotation = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[len1] != '\0' && str1[len1] != '\n')
        len1++;

    while (str2[len2] != '\0' && str2[len2] != '\n')
        len2++;

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    for (i = 0; i < len1; i++)
        temp[i] = str1[i];

    for (i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    for (i = 0; i <= len1; i++) {
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j])
                break;
        }

        if (j == len2) {
            rotation = 1;
            break;
        }
    }

    if (rotation)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}