//Write a program which search first occurrence of particular element from singly linked list.
//Function should return positio at which element is found.
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
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

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

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;
    while (Head != NULL)
    {
        if (Head->data == no)
        {
            return iPos;
        }
        Head = Head->next;
        iPos++;
    }
    return -1;
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

    InsertFirst(&Head, 70);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);

    Display(Head);

    int element = 30;
    int position = SearchFirstOcc(Head, element);

    if (position != -1)
    {
        printf("\nElement %d found at position: %d\n", element, position);
    }
    else
    {
        printf("\nElement %d not found in the list\n", element);
    }

    return 0;
}
