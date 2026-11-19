//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 1.0;
    int numerator = 3, denominator = 4;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}