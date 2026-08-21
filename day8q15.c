//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The character is an Upper case Alphabet.");
    }  
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("The character is a lower case alphabet.");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("The character is a digit.");
    
    }
    else
    {
        printf("The Character is a special character.");
    }
}