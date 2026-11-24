// Read an integer n, apply n += 10, n *= 2, and n -= 5, and print the final value.   
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value you want : ");
    scanf("%d",&n);
    n+=10;
    n*=2;
    n-=5;
    printf("%d",n);
    return 0;
}