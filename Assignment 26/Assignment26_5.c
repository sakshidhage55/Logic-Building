//Write a program which accept string from user and count number of white spaces.
#include <stdio.h>

int CountWhite(char *str)
{
    int i = 0, iCnt = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string:");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are: %d\n", iRet);

    return 0;
}