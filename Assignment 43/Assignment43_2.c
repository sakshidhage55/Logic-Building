// Write a program which palindrome elements of singly linked list
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

int IsPalindrome(int iNo)
{
    return (iNo == ReverseDigits(iNo));
}
void DisplayPalindrome(PNODE Head)
{

    printf("Palindrome elements in the list: ");
    while (Head != NULL)
    {
        if (IsPalindrome(Head->data))
        {
            printf("%d ", Head->data);
        }
        Head = Head->next;
    }
    printf("\n");
};

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

    DisplayPalindrome(Head);

    return 0;
}
