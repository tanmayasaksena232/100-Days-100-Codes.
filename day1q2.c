//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
void main ()
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("The sum: %d\n", a + b);
    printf("The Diffrence: %d\n", a - b);
    printf("The product: %d\n", a * b);
    b == 0? printf("NOT DEFINED"):printf("The quotient: %d", a / b);
}