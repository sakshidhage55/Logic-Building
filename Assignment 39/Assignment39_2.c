//Accept a program which accept two numbers from user and display position of common ON bits from that two numbers.
#include <stdio.h>

typedef unsigned int UINT;

void DisplayCommonONBits(UINT iNo1, UINT iNo2)
{
    unsigned int iMask = 1;
    unsigned int iCommon = iNo1 & iNo2; 
    int iPos = 1;

    printf("Positions of common ON bits are: ");
    while (iCommon)
    {
        if (iCommon & iMask)
        {
            printf("%d ", iPos);
        }
        iCommon >>= 1;
        iPos++;
    }
    printf("\n");
}

int main()
{
    unsigned int iValue1 = 0;
    unsigned int iValue2 = 0;

    printf("Enter first number: \n");
    scanf("%u", &iValue1);

    printf("Enter second number: \n");
    scanf("%u", &iValue2);

    DisplayCommonONBits(iValue1, iValue2);

    return 0;
}
