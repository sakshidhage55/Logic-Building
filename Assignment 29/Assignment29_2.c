//Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.

#include <stdio.h>

void strcpyX(char *Dest, char *Src)
{
    while (*Src != '\0')
    {
        if (*Src != ' ')
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }

    *Dest = '\0'; 
}

int main()
{
    char Arr[30] = "Marvel lous Pyth on";
    char Brr[30];

    strcpyX(Brr, Arr); 

    printf("%s",Brr);

    return 0;
}