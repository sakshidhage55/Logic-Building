//Write a program which accept number from user and return difference between summation of all its factors and non factors
#include <stdio.h>
int FactDiff(int iNo)
{
    int factorSum = 0;
    int nonFactorSum = 0;

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            factorSum += i;
        }
    }

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i != 0)
        {
            nonFactorSum += i;
        }
    }

    return factorSum - nonFactorSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("%d", iRet);

    return 0;
}
//The time complexity of this program is O(n), where n is the value of the input number iNo.