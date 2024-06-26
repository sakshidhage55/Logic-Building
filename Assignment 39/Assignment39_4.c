//Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF.
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    unsigned int iMask1 = 1 << (iPos1 - 1); 
    unsigned int iMask2 = 1 << (iPos2 - 1); 

    if ((iNo & iMask1) || (iNo & iMask2)) 
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
    int iPos1, iPos2;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%u", &iNo);

    printf("Enter first position: \n");
    scanf("%d", &iPos1);

    printf("Enter second position: \n");
    scanf("%d", &iPos2);

    bRet = ChkBit(iNo, iPos1, iPos2);

    if (bRet == TRUE)
    {
        printf("Bit at position %d or %d is ON\n", iPos1, iPos2);
    }
    else
    {
        printf("Bit at position %d or %d is OFF\n", iPos1, iPos2);
    }

    return 0;
}