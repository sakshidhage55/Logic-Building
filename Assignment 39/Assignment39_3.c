// Write a program which accept one number from user and check whether 9th  or 12 th bit of that number are on or off.
#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    unsigned int iMask = 0x00001200; 
    unsigned int iResult = iNo & iMask;

    if (iResult != 0) 
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
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%u", &iNo);

    bRet = ChkBit(iNo);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}
