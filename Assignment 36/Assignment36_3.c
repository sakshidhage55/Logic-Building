// Write a program which accept string from user and count number of small characters.
#include <stdio.h>

int Small(char *str)
{
    static int iCnt = 0;

    if (*str != '\0')
    {
        if ((*str >= 'a') &&(*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s", arr);

    iRet = Small(arr);

    printf("%d", iRet);

    return 0;
}