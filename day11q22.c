//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
void main(){
    float CP, SP, P, L;
    printf("Enter Selling Price: ");
    scanf("%f", &SP);
    printf("Enter Cost Price: ");
    scanf("%f", &CP);
    P = SP - CP;
    L = CP - SP;
    if(SP > CP){
        printf("Profit percentage: %f", (P/CP)*100);
    }
    else{
        printf("Loss percentage: %f", (L/CP)*100);
    }
}
