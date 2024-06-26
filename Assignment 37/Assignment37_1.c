//Write a program which checks whether 15th bit is off or on.

/*
    iNo         15       0 0 0 0 0 0 0 0 0 0 0 1 1 1 1
        Mask(8192)       1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
                    ----------------------- &
                        0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
*/


#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE  1
#define FALSE 0

bool ChkBit(UNIT iNo)
{
        unsigned int iMask = 8192;
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

    bRet= ChkBit(iNo);

    if (bRet == TRUE)
    {
        printf("The 15th bit is on\n");
    }
    else
    {
        printf("The 15th bit is off\n");
    }

    return 0;
}
