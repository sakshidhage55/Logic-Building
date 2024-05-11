//Write a program which accept number from user and display its factors in decreasing order
#include<stdio.h>
void FactRev(int iNo)
{
    int i;

    printf("Factors of %d in decreasing order: ", iNo);

    for (i = iNo - 1; i >= 1; i--)
    {
        if (iNo % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
// The time complexity of this program is O(n), where n is the value of the input number iNo.