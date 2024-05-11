//Write a program which accept number from user and display its table
#include<stdio.h>
void Table(int iNo)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf(" %d\n", iNo * i);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
// The time complexity of this program is O(1), which means it's constant time complexity.