// Accept number from user and display below pattern
#include <stdio.h>

void Pattern(int iNo)
{
    int i;

    for (i = 1; i <= iNo; i++)
    {
        printf("%d\t", 2*i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d", &iValue);

    Pattern(iValue);
}