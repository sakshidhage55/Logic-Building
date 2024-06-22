// Write a recursive program which display below program.
#include <stdio.h>

void Display(int iNo)
{
    char ch = 'a';
    if (ch < iNo)
    {
        printf("%c\t", ch);
        ch++;
        Display(ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}