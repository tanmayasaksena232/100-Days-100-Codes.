//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
void main()
{
    int sec,hr,min,r,s;
    printf("Enter time (in Seconds): ");
    scanf("%d",&sec);
    hr = sec/3600;
    r = sec % 3600;
    s = r % 60;
    min = r/60;

    printf("%d:%d:%d", hr, min, s);
    

}