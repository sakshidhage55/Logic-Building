//Write a recursive program which display below pattern.
#include <stdio.h>

void Display()
{
    int iNo = 5;
    static int i = 1;
    while (i < iNo)
    {
        printf("%d\t", i);
        i++;
        Display(i);
    }
}

int main()
{
    Display();

    return 0;
}