// Write a program which accept string from user and copy that characters of that string into another string by toggling the case.

#include <stdio.h>

void strcpytoggle(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if (*Src >= 'A' && *Src <= 'Z')
        {
            *Dest = *Src + 32;
        }
        else if (*Src >= 'a' && *Src <= 'z')
        {
            *Dest = *Src - 32;
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

    strcpytoggle(Brr, Arr);

    printf("%s", Brr);

    return 0;
}