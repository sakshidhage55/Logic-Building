//Write a program which accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then large
#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
        {
            printf("Small\n");
        }
    else if(50<iNo<=100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
// The time complexity of this program is O(1), which means it's constant time complexity.