//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
#include <stdio.h>
void main()
{
    int a;
    printf("Enter your precentage: ");
    scanf("%d",  &a);
    if(100>=a && a>=90){
        printf("Grade A");
    }
    else if(a>= 80){
        printf("Grade B");
    }
    else if(a>=70){
        printf("Grade C");
    }
    else if(a>=60){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
}