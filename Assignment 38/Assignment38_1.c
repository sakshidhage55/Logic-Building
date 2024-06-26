//Write a program which accept one number from user and off the 7th bit of that number if it is on. Return modified number.
#include <stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    unsigned int iMask = 0x00000040;
    unsigned int iResult = 0;
    iResult = iNo ^ iMask;
    return iResult;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    // 01000000
    

    printf("Enter number : \n");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);

    printf("Updated number is : %u\n", iRet);

    return 0;
}