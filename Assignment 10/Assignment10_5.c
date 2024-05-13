// Write a program which accept number from user and count frequency of such digits which are less than 6
#include <stdio.h>
int CountLessSix(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = CountLessSix(iValue);

    printf("Frequency of numbers less than 6 is:%d", iRet);
    return 0;
}