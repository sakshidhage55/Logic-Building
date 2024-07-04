// Write a prpgram which displays all the elements which are perfect from singly linear linked list.
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

BOOL IsPerfect(int number)
{
    if (number < 1)
    {
        return 0;
    }

    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= (number / 2); iCnt++)
    {
        if ((number % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum == number;
}

void DisplayPerfect(PNODE Head)
{
    printf("Perfect numbers in the list: ");
    while (Head != NULL)
    {
        if (IsPerfect(Head->data))
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

    DisplayPerfect(Head);

    return 0;
}
