//Write a program which accept string from user and returns largest digit
#include <stdio.h>

int Max(int iNo)
{
    static int iMax = 0; 
    int iDigit;

    if (iNo > 0)
    {
        iDigit = iNo % 10; 

        if (iDigit > iMax)
        {
            iMax = iDigit; 
        }

        Max(iNo / 10);
    }
    return iMax;
}

int main()
{
    int iRet;
    int iNo1;

    printf("Enter the number that you want: ");
    scanf("%d", &iNo1);

    iRet = Max(iNo1);

    printf("Greatest digit is: %d\n", iRet); 
    return 0;
}
