//Write a program to find odd factorial of given number
#include <stdio.h>

int OddFactorial(int iNo)
{
    int fact = 1, i, oddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if (i % 2 != 0) 
        {
            oddFact *= i;
        }
    }
    return oddFact; 
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}
// O(n), where n is the value of the given number iNo.