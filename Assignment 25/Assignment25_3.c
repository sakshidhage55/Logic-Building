//Write a program which accept string from user and return difference between frequency of small characters and frequncy of capital characters.
#include <stdio.h>

int Difference(char *str)
{
    int iDif = 0, iCap = 0, iSma = 0 ;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCap++;
        }
        else
        {
            iSma++;
        }
        str++;
    }
    return (iDif = iCap - iSma);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}