//Write a program which accept a string from user and count number of characters
#include<stdio.h>

int strlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string:");
    scanf("%s",arr);

    iRet = strlenX(arr);

    printf("%d", iRet);

    return 0;
}
