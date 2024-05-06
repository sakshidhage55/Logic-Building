//Write a program which accept one number from user and print that number of even numbers on screen
#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int count = 0;
    int number = 2;

    while (count < iNo)
    {
        printf("%d",number);
        number += 2;
        count++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}