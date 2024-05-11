//Write a program to find factorial of given number
#include<stdio.h>
int Factorial(int iNo)
{
    int fact = 1, i;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d", iRet);
    return 0;
}
// The time complexity of this program is O(n), where n is the value of the given number iNo