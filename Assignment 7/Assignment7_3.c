//Write a program to find even factorial of given number
#include<stdio.h>
 int EvenFactorial(int iNo)
{
    int fact = 1, i, evenFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        fact *= i;
        if (fact % 2 == 0) // Check if the factorial so far is even
        {
            evenFact *= i;
        }
    }
}    

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}
// O(n), where n is the value of the given number iNo.