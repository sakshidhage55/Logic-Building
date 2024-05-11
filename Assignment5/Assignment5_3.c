//Write a program  which accept number from user and print its numbers line
#include<stdio.h>

void Display(int iNo)
{
    int i;
    for (i = 1; i <= iNo; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
// The time complexity of this program is O(n), where n is the value of the input number iNo.