//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long int n;
    int freq[10] = {0};
    int digit, maxFreq = 0, result = 0;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}