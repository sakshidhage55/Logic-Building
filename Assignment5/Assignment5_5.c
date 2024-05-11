//Write a program which accept N and print first 5 multiples of N
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d ", iNo * i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}
// The time complexity of this program is O(N), where N is the value of the input number iNo.