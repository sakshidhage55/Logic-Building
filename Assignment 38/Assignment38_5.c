// Write a program which accept one number from user and on its first 4 bits. Return modified number.
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    unsigned int iMask = 0x0000000f;
    unsigned int iResult = 0;
    iResult = iNo | iMask;
    return iResult;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter number : \n");
    scanf("%u", &iValue);

    iRet = OnBit(iValue);

    printf("Updated number is : %u\n", iRet);

    return 0;
}