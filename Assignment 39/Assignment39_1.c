//Write a program which accept a number from user and count number of ON(1) bits in it without using % and / operator.
#include <stdio.h>
#include <stdlib.h>

typedef unsigned int UINT;

UINT CountBit(UINT iNo)
{
    // unsigned int iMask = 0xffffffff;

    // unsigned int iResult = 0;
    
    int iCnt = 0;

    while (iNo)
    {
        iCnt += iNo & 1; 
        iNo >>= 1;       
    }

    // iResult = iNo ^ iMask;

    return iCnt;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter number : \n");
    scanf("%u", &iValue);

    iRet = CountBit(iValue);

    printf("Number of ON bits : %u\n", iRet);

    return 0;
}