// Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
#include <stdio.h>
#include <stdlib.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int lastIndex = -1;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            lastIndex = i;
        }
        i++;
    }
    return lastIndex; 
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    while (getchar() != '\n');

    printf("Enter the character: ");
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    if (iRet != -1)
    {
        printf("Character last occurrence is at index: %d\n", iRet);
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
