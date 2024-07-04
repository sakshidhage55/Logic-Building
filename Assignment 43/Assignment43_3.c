// Write a program whci display product of all digits of all elements from singly linear linked list(Don't consider 0)
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

int ProdDigits(int iNo)
{
    int iProd = 1;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iProd = iProd * iDigit;
        }
        iNo = iNo / 10;
    }
    return iProd;
}

void DisplayDigitProduct(PNODE Head)
{
    printf("Product of digits of each element: ");
    while (Head != NULL)
    {
        int Product = ProdDigits(Head->data);
        printf("%d ", Product);
        Head = Head->next;
    }
    printf("\n");
}

int ReverseDigits(int iNo)
{
    int iReverse = 0;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iReverse;
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

    InsertFirst(&Head, 11);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 414);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 89);

    Display(Head);

    DisplayDigitProduct(Head);
    
    return 0;
}
