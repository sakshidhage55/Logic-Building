// Write a prpgram which displays all the elements which are prime from singly linear linked list.
#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

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

BOOL IsPrime(int number)
{
    if (number < 2)
    {
        return 0;
    }

    int iCnt = 0, iCount = 0;

    for (iCnt = 2; iCnt <= (number / 2); iCnt++)
    {
        if ((number % iCnt) == 0)
        {
            return 0;
        }
    }
    return 1;
}

void DisplayPrime(PNODE Head)
{
    printf("Prime numbers in the list: ");
    while (Head != NULL)
    {
        if (IsPrime(Head->data))
        {
            printf("%d ", Head->data);
        }
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
    int iRet;

    InsertFirst(&Head, 11);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 89);

    Display(Head);

    DisplayPrime(Head);

    return 0;
}
