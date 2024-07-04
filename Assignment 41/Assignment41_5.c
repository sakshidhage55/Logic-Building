// Write a prpgram which return smallest element from singly linear linked list.
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

int Minimum(PNODE Head)
{

    if (Head == NULL)
    {
        printf("The list is empty.\n");
        return -1;
    }

    int iMin = Head->data;
    while (Head != NULL)
    {
        if (Head->data < iMin)
        {
            iMin = Head->data;
        }
        Head = Head->next;
    }
    return iMin;
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

    int Min = Minimum(Head);

    printf("Minimum elemet is : %d\n", Min);

    return 0;
}
