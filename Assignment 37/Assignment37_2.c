// Write a program which checks whether 5th bit and  18th is off or on.


/*
    iNo         15          1 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1
        Mask(1048576)       1 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0
                    ----------------------- &
                        
*/

#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UNIT iNo)
{
    unsigned int iMask = 1048576;
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
        printf("The 5th and 18th bit is on\n");
    }
    else
    {
        printf("The 5th and 18th bit is off\n");
    }

    return 0;
}
