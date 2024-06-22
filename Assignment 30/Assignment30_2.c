//Write a program which 2 strings from user and check whether contents of two strings are equal or not(Implement strcmp() function).
#include<stdio.h>
#include<stdbool.h>

bool StrCmpX(char *first, char *second)
{
    while ((*first != '\0') && (*second != '\0'))
    {
        if (*first != *second)
        {
            break;
        }
        first++;
        second++;
    }
    if ((*first == '\0') && (*second == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool bRet = true;
    char Arr[30] = "Marvellous Infosystems";
    char Brr[30] = "Marvellous Infosystems";

    bRet = StrCmpX(Arr, Brr);

    if(bRet = true)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }
    return 0;
}