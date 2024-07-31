#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
      //step1: Allocate memory for node
      PNODE newn=NULL;
      newn = (PNODE)malloc(sizeof(NODE));

      //Step2: Initialize the node
      newn->data =No;
      newn->next =NULL;

      //step3: Check whether LL is empty
      if(*Head==NULL)
      {
            *Head=newn;
      }
      else
      {
        newn->next=*Head;
        *Head=newn;
      }
}

void Display(PNODE Head)
{
    printf("\nElements of linked list are: \n");
    while(Head!=NULL)
    {
        printf("| %d | -> ",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        Head=Head->next;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    PNODE First= NULL;

    int iRet=0;

    InsertFirst(&First,101);//call by address bcoz it is changing data in ll
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);//call by value

    iRet=Count(First);
    printf("\nElements in linked list are : %d",iRet);
    return 0;
}