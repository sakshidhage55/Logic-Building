//Write a program which accept number from user and display all its non factors
#include <stdio.h>
void NonFact(int iNo)
{
    printf("Non-factors of %d are: ", iNo);
    for (int i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
// he time complexity of this program is O(n), where n is the value of the input number iNo.