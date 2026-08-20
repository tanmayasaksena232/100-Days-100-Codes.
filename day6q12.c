//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
// Write a program to input an integer and check whether it is positive, negative or zero using nested if-else
#include <stdio.h>
void main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);

    if(a !=0)
    {
        if(a>0)
        {
            printf("Your Number Is Positive.");
        }
        else
        {
            printf("Your Number Is Negative.");

        }
    }
    else
    {
        printf("Your Number Is Zero.");
    }
}
