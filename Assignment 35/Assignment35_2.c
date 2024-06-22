//Write a program which accept number from user and return summation of its digits
#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        Sum(iNo);
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet =Sum(iValue);

    printf("Summation is: %d", iRet);

    return 0;
}