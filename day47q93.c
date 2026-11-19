//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[256] = {0};
    int i, anagram = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}