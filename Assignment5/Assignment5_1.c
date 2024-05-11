//Write a program which accept number from user and print that number of $ & * on screen
#include <stdio.h>

void PrintStars(int iNo)
{
    int iCnt;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n"); // Add a newline after printing the stars
}

int main()
{
    int iValue;
    printf("Enter the number of stars to print: ");
    scanf("%d", &iValue);

    PrintStars(iValue);
    return 0;
}
// The time complexity of this program is O(n), where n is the value of the input number iNo.