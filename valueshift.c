// Read three integers a, b, c and shift their values so a gets b, b gets c, and c gets a
#include <stdio.h>
int main()
{
    int a,b,c,temp;
    printf("Enter the integers : ");
    scanf("%d %d %d",&a,&b,&c);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("%d %d %d",a,b,c,temp);
    return 0;
}