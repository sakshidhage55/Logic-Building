//Accept number from user and display below pattern
#include<stdio.h>

void Pattern(int iNo)
{
    int i;
    char ch = 'A'; 

    for (i = 0; i < iNo; i++)
    {
        printf("%c ", ch + i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:");
    scanf("%d",&iValue);

    Pattern(iValue);
}