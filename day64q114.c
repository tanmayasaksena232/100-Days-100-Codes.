//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>

int main() {
    char s[1000];
    int i, j, k;
    int maxLength = 0, currentLength;
    int repeated;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        repeated = 0;

        for (j = i; s[j] != '\0' && s[j] != '\n'; j++) {

            for (k = i; k < j; k++) {
                if (s[k] == s[j]) {
                    repeated = 1;
                    break;
                }
            }

            if (repeated)
                break;
        }

        currentLength = j - i;

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("%d", maxLength);

    return 0;
}
 