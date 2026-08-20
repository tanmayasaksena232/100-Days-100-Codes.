//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
void main()
{
    float p, r, t;
    printf("Enter Principal amt: ");\
    scanf("%f", &p);
    printf("Enter Rate: ");
    scanf("%f", &r);
    printf("Enter Time: ");
    scanf("%f", &t);
    printf("Simple Intrest: %f\n", p*r*t/100);
    printf("Compound intrest: %f\n", p*(pow((1 + r/100),t)) - p);

}