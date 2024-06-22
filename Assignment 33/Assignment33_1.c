//Write a recursive program which display below pattern
#include<stdio.h>

void Display()
{
    int iNo = 5;
    static int i = 0;
    if(i < iNo)
    {
        printf("*\t");
        i++;
        Display(i);
    }
}

int main()
{
    Display();

    return 0;
}