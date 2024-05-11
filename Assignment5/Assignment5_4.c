//Write a program which accepts N from user and print all odd numbers up to N
#include <stdio.h>

void OddDisplay(int iNo)
{
    int i;
    for (i = 1; i <= iNo; i++)
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d", &iValue); // Corrected the scanf statement

    OddDisplay(iValue);

    return 0;
}
//The time complexity of this program is O(n), where n is the value of the input number iNo.
