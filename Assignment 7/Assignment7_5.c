//Write a program which returns difference between Even Factorial and Odd Factorial of given number
#include <stdio.h>

int FactorialDiff(int iNo)
{
    int fact = 1, i, oddFact = 1, evenFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        fact *= i;

        if (i % 2 == 0) // Even factorial
        {
            evenFact *= i;
        }
        else // Odd factorial
        {
            oddFact *= i;
        }
    }

    return  evenFact - oddFact; // Return the difference between odd factorial and even factorial
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d", iRet);

    return 0;
}
// O(n), where n is the value of the given number iNo