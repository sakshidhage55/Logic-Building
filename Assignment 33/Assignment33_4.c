// Write a recursive program which display below pattern.
#include <stdio.h>

void Display()
{
    static char c = 'A';
    if (c <= 'F')
    {
        printf("%c\t", c);
        c++;
        Display(c);
    }
}

int main()
{
    Display();

    return 0;
}