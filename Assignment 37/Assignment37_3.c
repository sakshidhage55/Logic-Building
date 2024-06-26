// Write a program which checks whether 7th bit and 15th and 21th, 28th is off or on.

/*
    iNo               0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1
        Mask(256)       1 0 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0
   
7 = 64                    ----------------------- &
15 = 1048560
21 = 67107840
28 = 8589803520
32=137436856320

*/
#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UNIT iNo)
{
    unsigned int iMask = 8667959984;
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
        printf("The 7th, 15th, 21st and 28th bit is on\n");
    }
    else
    {
        printf("The 7th, 15th, 21st and 28th bit is off\n");
    }

    return 0;
}
