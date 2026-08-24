//Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include <stdio.h>
void main()
{
     int a;
    printf("Enter units: ");
    scanf("%d", &a);
    if(100 >= a){
        printf("Bill to be Paid: %d", a*5 );
    }
    else if(200>a){
        printf("Bill to be Paid: %d", 500 +(a - 100)*7);
    }
    else if(300>a){
        printf("Bill to be Paid: %d", 1200 + (a - 200)*10 );
    }
    else{
        printf("Bill to be paid: %d", 2200 + (a - 300)*12);
    }
}