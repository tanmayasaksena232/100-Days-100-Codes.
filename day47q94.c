//Q94: Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[1000], longest[1000];
    int i = 0, start = 0;
    int maxLen = 0, currLen = 0, maxStart = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
            currLen = 0;
        } else {
            currLen++;
        }

        i++;
    }

    for (i = 0; i < maxLen; i++) {
        longest[i] = str[maxStart + i];
    }
    longest[maxLen] = '\0';

    printf("%s", longest);

    return 0;
}