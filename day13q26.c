//Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>
void main()

{
    int a,i;
    printf("Enter Your number: ");
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        printf("%d\t",i);
    }

}