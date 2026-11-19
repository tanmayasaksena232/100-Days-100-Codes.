//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 'a']++;
    }

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (freq[str[i] - 'a'] > 1) {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}