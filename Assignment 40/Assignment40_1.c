//Write a program which accept one number and position fro user and check whether bit at that position is on or off. If bit is one return TRUE otherwise return FALSE
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1)
{
    unsigned int iMask1 = 1 << (iPos1 - 1);

    if ((iNo & iMask1))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    unsigned int iNo = 0;
    int iPos1;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%u", &iNo);

    printf("Enter first position: \n");
    scanf("%d", &iPos1);

    bRet = ChkBit(iNo, iPos1);

    if (bRet == TRUE)
    {
        printf("Bit at position %d is ON\n", iPos1);
    }
    else
    {
        printf("Bit at position %d is OFF\n", iPos1);
    }

    return 0;
}