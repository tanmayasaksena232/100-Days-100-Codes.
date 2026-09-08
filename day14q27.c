//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
void main()
{
    int a, i, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &a);
    for( i=1; i <= a; i++){
        sum+= (2*i -1);
    }
    printf("the sum is: %d", sum );
}