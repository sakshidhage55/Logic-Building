//Write a program which accept string from user and accept one character. Return frequncy of that character.
#include <stdio.h>
#include <stdlib.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the character: ");
    scanf("%c", &cValue);

    while (getchar() != '\n');

    iRet = CountChar(arr, cValue);

    printf("Character frequency is: %d\n", iRet);

    return 0;
}
