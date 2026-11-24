//WAP to check whether a number is positive negative or zero 
#include <stdio.h>
int main()
{
    int integer;
    printf("Enter an integer you want to check ");
    scanf("%d",&integer);
    if(integer<0)
    {
        printf("The Given Integer is Negative ");
    }
    else if(integer==0)
    {
        printf("The Given number is Zero");
    }
    else
    {
        printf("The Given integer is positive");
    }
    return 0;
}