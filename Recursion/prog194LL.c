#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void DisplayR(PNODE Head)
{

    if(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
        DisplayR(Head);
    }
}
void DisplayReverseR(PNODE Head)
{

    if(Head != NULL)
    {
        DisplayR(Head->next);
        printf("| %d | -> ",Head->data);
        
    }
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    
    DisplayR(First);
    printf("\nReversed ll\n");
        DisplayReverseR(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}