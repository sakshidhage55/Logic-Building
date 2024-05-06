// // write a program which accept number from user and print even factors of that number

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    int i = 0;
    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);
    return 0;
}
