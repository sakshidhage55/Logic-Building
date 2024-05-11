//Write a program which accept number from user and return summation of all its non factors
#include <stdio.h>
int SumNonFact(int iNo)
{
    int sum = 0;
    for (int i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);


    return 0;
}