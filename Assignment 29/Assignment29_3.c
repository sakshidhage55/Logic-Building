//Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.

#include <stdio.h>

void strcpycap(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if (*Src >= 'a' && *Src <= 'z')
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

    strcpycap(Brr, Arr); 

    printf("%s", Brr);

    return 0;
}