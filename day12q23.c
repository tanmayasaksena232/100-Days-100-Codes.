//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
#include <stdio.h>
void main(){
    int a;
    printf("Enter days: ");
    scanf("%d", &a);
    if(a<=5){
        printf("Fine to be Paid: %d", a*2);
    }
    else if(10>a){
        printf("Fine to be Paid: %d", 10 + (a - 5)*4);
    }
    else if(30>a){
        printf("Fine to be Paid: %d", 30 + (a - 10)*6 );
    }
    else{
        printf("Membership Canelled.");
    }
}