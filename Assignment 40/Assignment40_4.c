// Write a program whcih accept one number and position from user and toggle that bit. return modified number.

#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    if (iPos < 1 || iPos > 32) 
    {
        return iNo;
    }

    unsigned int iMask = 1 << (iPos - 1); 

    iNo ^= iMask; 

    return iNo;
}

int main()
{
    unsigned int iNo = 0;
    int iPos;

    printf("Enter number: \n");
    scanf("%u", &iNo);

    printf("Enter position: \n");
    scanf("%d", &iPos);

    unsigned int iResult = ToggleBit(iNo, iPos);

    printf("Modified number: %u\n", iResult);

    return 0;
}
