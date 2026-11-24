// Read an integer and print whether it is divisible by both 2 and 3, only 2, only 3, or neither.
#include <stdio.h>
int main()
{
    int integer;
    printf("Enter the integer ");
    scanf("%d",&integer);
   
    if(integer%2==0 && integer%3==0)
    {
        printf("It is both divisible by 2 & 3");
    }
    else if(integer%2==0)
    {
        printf("It is only divisble by 2");
    }
    else if(integer%3==0)
    {
        printf("It is divisible by only 3");
    }
    else 
    {
        printf("It is not divisible by both");
    }
    return 0;
}