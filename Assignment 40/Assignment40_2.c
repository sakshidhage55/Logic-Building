//Write a program which accept one number and position from user and off that bit. Return modified number.

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    if (iPos < 1 || iPos > 32) 
    {
        return iNo;
    }

    unsigned int iMask = ~(1 << (iPos - 1)); 

    iNo &= iMask; 

    return iNo;
}
int main()
{
    unsigned int iNo = 0;
    int iPos;

    printf("Enter number: \n");
    scanf("%u", &iNo);

    printf("Enter first position: \n");
    scanf("%d", &iPos);

    unsigned int iResult = OffBit(iNo, iPos);

    printf("Modified number: %u\n", iResult);

    return 0;
}