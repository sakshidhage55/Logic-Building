//Write a program which accept range from user and return addition of all numbers in between that range(Range should contain positive numbers only)
#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int i = 0;
    int sum = 0;
    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range");
        return -1;
    }
    for (i = iStart; i <= iEnd; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:");
    scanf("%d", &iValue1);

    printf("Enter endingpoint:");
    scanf("%d", &iValue2);
    
    iRet = RangeSum(iValue1, iValue2);
    if (iRet != -1)
    {
        printf("Addition is: %d\n", iRet);
    }

    // printf("Addition is:%d", iRet);

    return 0;
}