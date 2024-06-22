//Write a program which accept string from user and copy the contents into another string by removing extra white spaces
#include <stdio.h>

int strcpyX(char *Dest, char *Src)
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
    char Arr[30];
    char Brr[30];

    printf("Enter the source string: ");
    scanf("%[^\n]s", Arr); 
    strcpyX(Brr, Arr);

    printf("Copied string with removed extra spaces: %s\n", Brr);

    return 0;
}