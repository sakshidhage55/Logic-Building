//Write a program which accept string from user and count white spaces
#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s", arr);

    iRet = WhiteSpace(arr);

    printf("%d", iRet);

    return 0;
}