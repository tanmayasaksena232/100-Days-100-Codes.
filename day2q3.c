//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter lenght:");
    scanf("%d", &a);
    printf("Enter breath: ");
    scanf("%d", &b);
    printf("The perimeter is %d\n", (a + b)*2);
    printf("The Area is %d", a*b);


    
}