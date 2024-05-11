//Write a program which accept number from user and display below pattern
#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    int j = 0;
    for(i = 1; i<=iNo; i++)
    {
        printf("*\t");
    }
    //O(n)
    for (j = 1; j <= iNo; j++)
    {
        printf("#\t");
    }
    //O(n)
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
// Time Complexity = O(n)