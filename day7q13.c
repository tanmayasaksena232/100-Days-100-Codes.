//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
void main()
{
    int a;
    printf("Enter the year: ");
    scanf("%d", &a);
    if(a%400 == 0)
    {
        printf("Its a leap year!");
    }
    else
    {
        printf("Its not a leap year");
    }
}