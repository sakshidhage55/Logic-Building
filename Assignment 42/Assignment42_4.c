// Write a prpgram which return second maximum element from singly linear linked list.
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

int SecondMaximum(PNODE Head)
{
    if (Head == NULL || Head->next == NULL)
    {
        printf("The list has less than two elements.\n");
        return -1; 
    }

    int firstMax = Head->data;
    int secondMax = -1;
    Head = Head->next;

    while (Head != NULL)
    {
        if (Head->data > firstMax)
        {
            secondMax = firstMax;
            firstMax = Head->data;
        }
        else if (Head->data > secondMax && Head->data != firstMax)
        {
            secondMax = Head->data;
        }
        Head = Head->next;
    }

    return secondMax;
}

void Display(PNODE Head)
{
    printf("\nNULL <=> ");
    while (Head != NULL)
    {
        printf("|  %d  | <=> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 640);
    InsertFirst(&Head, 240);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    Display(Head);

    int Max = SecondMaximum(Head);

    printf("Maximum elemet is : %d\n", Max);

    return 0;
}
