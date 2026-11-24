// Read two integers a and b, and print 1 if both are zero (a == 0 && b == 0), else 0   
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    if(a==0 &&b==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}