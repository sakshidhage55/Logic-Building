// Write a program which accept string from user and return its reverse number
#include <stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0; 

    if (iNo > 0)
    {
        int iDigit = iNo % 10;     
        iRev = iRev * 10 + iDigit; 

        Reverse(iNo / 10); 
    }
    return iRev;
}

int main()
{
    int iRet;
    int iNo1;

    printf("Enter the number that you want: ");
    scanf("%d", &iNo1);

    iRet = Reverse(iNo1);

    printf("Smallest digit is: %d\n", iRet);
    return 0;
}
