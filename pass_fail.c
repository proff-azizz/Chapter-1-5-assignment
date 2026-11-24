// >80 distinction,>60 first division,>=40 pass ,40 fail
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks you obtained : ");
    scanf("%d", &marks);
    if (marks > 80)
    {
        printf("Congratulations !!!\nYou got Distinction");
    }
    else if (marks > 60)
    {
        printf("You Got First Division");
    }
    else if (marks >= 40)
    {
        printf("You Passed The Exam");
    }
    else
    {
        printf("You failed the Exam");
    }

    return 0;
}