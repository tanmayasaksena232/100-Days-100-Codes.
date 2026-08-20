//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
void main()
{
    char x;
    printf("Enter your letter (IN CAPS): ");
    scanf("%c", &x);
    if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        printf("The letter is a vowel.");
    }
    else
    {
        printf("The letter is a consonant.");
    }
}