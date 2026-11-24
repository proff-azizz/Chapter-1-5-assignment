// ead a 4-digit year (e.g., 2026) and print its last two digits
#include <stdio.h>
int main()
{
    int year,last;
    printf("Enter the 4 digit year you want ");
    scanf("%d",&year);
    last=year%100;
    printf("The last 2 digits of  year %d is %02d",year,last);
    return 0;
}