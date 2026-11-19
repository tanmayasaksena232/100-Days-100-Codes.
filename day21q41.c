//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, digits = 0;
    int temp, power = 1, middle, result;

    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;
    }

    first = temp;

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}