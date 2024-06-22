//Write a recursive program which accept number from user and return its product of digits
#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("Multiplication is : %lu\n", iRet);

    return 0;
}