//Write a program which displays smallest digits of all element from singly linked list
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

int SmallestDigit(int iNo)
{
    int smallest = 9;
    int digit;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        digit = iNo % 10;
        if (digit < smallest)
        {
            smallest = digit;
        }
        iNo = iNo / 10;
    }

    return smallest;
}

void DisplaySmall(PNODE Head)
{
    printf("Smallest digits of each element: ");
    while (Head != NULL)
    {
        int smallest = SmallestDigit(Head->data);
        printf("%d ", smallest);
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

    InsertFirst(&Head, 11);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 415);

    Display(Head);

    DisplaySmall(Head);

    return 0;
}
