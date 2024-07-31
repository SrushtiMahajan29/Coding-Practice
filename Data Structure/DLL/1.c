#include<stdio.h>
#include<stdlib.h>

struct node{
    int Data;
    struct node *next;
    struct node *prev;//#
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void insertFirst(PPNODE head,int no)
{
    //allocate
    PNODE newn=NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    //initialize
    newn->Data=no;
    newn->next=NULL;
    newn->prev=NULL;    // #

    if(*head==NULL)
    {
        *head=newn;    
    }
    else 
    {
        newn->next=*head;
        (*head)->prev=newn;  // #
        *head=newn;
    }
}

void insertLast(PPNODE head,int no)
{
    PNODE temp=*head;
    PNODE newn=NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    //initialize
    newn->Data=no;
    newn->next=NULL;
    newn->prev=NULL;    // #
    
    if(*head==NULL)
    {
        *head=newn;    
    }
    else
    {
        //type 2
        while(temp->next!=NULL)
        {
            temp=temp->next;       
        }
        temp->next=newn;
        newn->prev=temp;
    }
}

void deleteFirst(PPNODE head)
{

    if(*head==NULL)     //empty LL
    {
        printf("Linked list is empty");
        return ;
    }
    else if((*head)->next==NULL && (*head)->prev==NULL)  //#
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        (*head)=(*head)->next;//* aani arrow -> sobat aale so ()
        free((*head)->prev);
        (*head)->prev=NULL;        
    }

}
void deleteLast(PPNODE head)
{
    PNODE temp=*head;

    if(*head==NULL)     //empty LL
    {
        printf("Linked list is empty");
        return ;
    }
    else if((*head)->next==NULL && (*head)->prev==NULL)  //#
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void dispaly(PNODE head)
{
    printf("\nContaints of linked list are : \n");
    printf("NULL <=>");
    while(head!=NULL)
    {
        printf("|_ %d _| <=> ",head->Data);
        head=head->next;
    }
    printf("NULL\n");
}
int Count(PNODE head)
{
    int iCnt=0;
    while(head!=NULL)
    {
        iCnt++;
        head=head->next;
    }
    return iCnt;
}
void insertAtPos(PPNODE head,int no,int ipos)
{
    PNODE newn=NULL;
    PNODE temp=*head;

    int iSize=0,i=0;
    iSize=Count(*head);

    if(ipos<1 || ipos>(iSize+1))
    {
        printf("Invalid size");
        return;
    }
    if(ipos==1)
    {
        insertFirst(head,no);
    }
    else if(ipos==iSize+1)
    {
        insertLast(head,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->Data=no;
        newn->next=NULL;
        newn->prev=NULL;    //#

        for(i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;        //#
    }
}

void deleteAtPos(PPNODE head,int no,int ipos)
{
    PNODE temp=*head;
    int iSize=0,i=0;
    iSize=Count(*head);

    if((ipos<1) || (ipos>(iSize)))
    {
        printf("Invalid location\n");
        return;
    }
    if(ipos==1)
    {
        deleteFirst(head);
    }
    else if(ipos==iSize)
    {
        deleteLast(head);
    }
    else
    {
        for(i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);  //#
        temp->next->prev=temp;  //#

    }
}

int main()
{
    PNODE first=NULL;
    int iret=0;
    printf("\n-----------------Insert First ----------------------\n");
    insertFirst(&first,51);
    insertFirst(&first,21);
    insertFirst(&first,11);

    dispaly(first);
    iret=Count(first);
    printf("\nNumber of Containts of linked list are : \n");
    printf("%d",iret);

    printf("\n-------------------Insert Last--------------------\n");
    insertLast(&first,101);
    insertLast(&first,111);
    insertLast(&first,121);
    dispaly(first);
    iret=Count(first);
    printf("\nNumber of Containts of linked list are : \n");
    printf("%d",iret);

    printf("\n-------------------Insert at Position--------------------\n");
    insertAtPos(&first,105,4);
    dispaly(first);
    iret=Count(first);
    printf("\nNumber of Containts of linked list are : \n");
    printf("%d",iret);

    printf("\n-------------------delete at position--------------------\n");
    deleteAtPos(&first,105,4);
    dispaly(first);
    iret=Count(first);
    printf("\nNumber of Containts of linked list are : \n");
    printf("%d",iret);

    printf("\n-------------------delete First--------------------\n");
    deleteFirst(&first);
    deleteFirst(&first);
    deleteFirst(&first);
    dispaly(first);
    iret=Count(first);
    printf("\nNumber of Containts of linked list are : \n");
    printf("%d",iret);

    printf("\n-------------------Delete Last--------------------\n");
    deleteLast(&first);
    dispaly(first);
    iret=Count(first);
    printf("\nNumber of Containts of linked list are : \n");
    printf("%d",iret);


    return 0;
}