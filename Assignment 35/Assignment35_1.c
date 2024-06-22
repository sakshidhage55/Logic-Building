// Write a recursive program which accept number from user and display below pattern.
#include <stdio.h>

void Display(int iNo)
{
    if (iNo >= 1)
    {
        printf("%d\t*\t", iNo);
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}