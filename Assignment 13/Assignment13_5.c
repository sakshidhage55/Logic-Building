// Accept number of rows and columns from user and display below pattern
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j, num = 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", num);
        }
        num++; // Increment the number for the next row
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}
