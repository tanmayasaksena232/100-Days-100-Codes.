//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("The sum: %d", n*(n + 2)/2);
}
