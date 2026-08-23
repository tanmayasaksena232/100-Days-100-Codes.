//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
void main()

{
    int a,b,c,d,x1,x2,x3;
    printf("Enter Coefficients of Quadratic Equation: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d>0){
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("The roots are real and distinct: %d and %d ", x1, x2);
    }
    else if(d == 0){
        x3 = -b / (2*a);
        printf ("The roots are real and equal: %d", x3);
    }
    else{
        printf("Root are imaginary.");
    }
    
}