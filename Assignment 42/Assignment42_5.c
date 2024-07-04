#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

void DisplayDigitSums(PNODE Head)
{
    while (Head != NULL)
    {
        int sum = SumDigits(Head->data);
        printf("%d ", sum);
        Head = Head->next;
    }
    printf("\n");
}

void Display(PNODE Head)
{
    printf("NULL <=> ");
    while (Head != NULL)
    {
        printf("| %d | <=> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 110);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 240);
    InsertFirst(&Head, 640);

    Display(Head);

    printf("Sum of digits of all elements: ");
    DisplayDigitSums(Head);

    return 0;
}
