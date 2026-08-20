//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
void main()
{
    int r;
    printf("Enter Radius of Circle: ");
    scanf("%d" ,&r);
    printf("The area of the Circle: %f\n", 3.14 * r * r);
    printf("The cricumference of the Circle: %f", 2 * 3.14 * r );
}
