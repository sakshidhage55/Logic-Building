//Write a program which accept number from user and display its multiplication of factors
#include<stdio.h>
int MultFact(int iNo)
{
    int i;
    int mult = 1;
    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            mult *= i;
        }
    }
    return mult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
// The time complexity of this program is O(n), where n is the value of the input number iNo.