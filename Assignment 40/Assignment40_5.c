// Write a program which accept one nu// Write a program whcih accept one number and position from user and toggle that bit. return modified number.

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    unsigned int iMask = 0xF000000F;

    iNo ^= iMask;

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

    unsigned int iResult = ToggleBit(iNo, iPos);

    printf("Modified number: %u\n", iResult);

    return 0;
}

