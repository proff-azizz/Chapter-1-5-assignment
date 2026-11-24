// Read an integer and check if it is divisible by both 5 and 11
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number you want to check ");
    scanf("%d", &number);
    if (number % 5 == 0 && number % 11 == 0)
    {
        printf(" YES it is divisible by both 5 and 11");
    }
    else
    {
        printf("No it is not divisible by 5 and 11");
    }

    return 0;
}