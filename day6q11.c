//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
void main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    if(a%2 == 0)
    {
        printf("Your Number is even.");
    }
    else
    {
        printf("your numer is odd");
    }
}
