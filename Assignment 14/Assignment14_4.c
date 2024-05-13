// Accept number of rows and number of columns from user and display below pattern
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for (i = iRow; i > 0; i--)
    {
        for (j = iCol; j > 0; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}
