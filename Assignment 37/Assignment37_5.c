// Write a program which checks whether first and last bit is On or OFF .First bit means
//bit number 1 and last bit means bit number 32.

/*
    iNo         15             0 0 0 0 1 1 1 1 1
        Mask(256)            1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1

7 = 64                    ----------------------- &
8 = 128
9 = 256

*/
#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UNIT iNo)
{
    unsigned int iMask = 137436856320;

    unsigned int iResult = iNo & iMask;

    if (iResult == iMask)
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

    printf("Enter number : \n");
    scanf("%u", &iNo);

    bRet = ChkBit(iNo);

    if (bRet == TRUE)
    {
        printf("The first and last bit are on\n");
    }
    else
    {
        printf("The first and last bit are off\n");
    }

    return 0;
}
