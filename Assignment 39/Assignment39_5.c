//Write a program whcih accept one number from user and range of positions from user. Toggle all bits fromm that range.

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    if (iStart > iEnd || iStart < 1 || iEnd > 32)
    {
        return iNo; 
    }

    unsigned int iMask = 0;
    for (int i = iStart; i <= iEnd; i++)
    {
        iMask |= (1 << (i - 1));
    }

    iNo ^= iMask;

    return iNo;
}
int main()
{
    unsigned int iNo = 0;
    int iPos1, iPos2;
    
    printf("Enter number: \n");
    scanf("%u", &iNo);

    printf("Enter first position: \n");
    scanf("%d", &iPos1);

    printf("Enter second position: \n");
    scanf("%d", &iPos2);

    unsigned int iResult = ToggleBitRange(iNo, iPos1, iPos2);

    printf("Modified number: %u\n", iResult);

    return 0;
}