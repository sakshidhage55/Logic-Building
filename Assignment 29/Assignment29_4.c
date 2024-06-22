// Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into smaall case.

#include <stdio.h>

void strcpysmall(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if (*Src >= 'A' && *Src <= 'Z')
        {
            *Dest = *Src + 32 ;
        }
        else
        {
            *Dest = *Src;
        }
        Src++;
        Dest++;
    }
    *Dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    strcpysmall(Brr, Arr);

    printf("%s", Brr);

    return 0;
}