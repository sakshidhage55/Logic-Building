// Write a recursive program which display below pattern.
#include <stdio.h>

void Display()
{
    static int iNo = 5;
    static int i = 1;
    while(i <= iNo)
    {
        printf("%d\t", iNo);
        iNo--;
        Display(iNo);
    }
}

int main()
{
    Display();

    return 0;
}