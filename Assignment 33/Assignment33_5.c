// Write a recursive program which display below pattern.
// Write a recursive program which display below pattern.
#include <stdio.h>

void Display()
{
    static char c = 'a';
    if (c <= 'f')
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