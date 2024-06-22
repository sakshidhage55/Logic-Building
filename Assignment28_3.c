// Write a program which accepts string from user and copy capital characters of that string into another string
#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0'; 
}

int main()
{
    char arr[30];
    char brr[30] = {0}; 

    printf("Enter a string: ");
    
    scanf("%29s", arr);
    StrCpyCap(arr, brr);

    printf("Capital letters copied: %s\n", brr);

    return 0;
}
