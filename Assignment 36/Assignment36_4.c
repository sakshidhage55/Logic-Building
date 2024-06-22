// Write a program which accept string from user and returns smallest digit
#include <stdio.h>

int Min(int iNo)
{
    static int iMin = 10;
    int iDigit;

    if (iNo > 0)
    {
        iDigit = iNo % 10;

        if (iMin > iDigit)
        {
            iMin = iDigit;
        }

        Min(iNo / 10);
    }
    return iMin;
}

int main()
{
    int iRet;
    int iNo1;

    printf("Enter the number that you want: ");
    scanf("%d", &iNo1);

    iRet = Min(iNo1);

    printf("Smallest digit is: %d\n", iRet);
    return 0;
}
