#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void insertFirst(PPNODE head, int no)
{
    //step1
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {

        newn->next=*head;
        *head=newn;
    }
}

void insertLast(PPNODE head,int no)
{
    
    PNODE temp=*head;

    PNODE newn=(PNODE)malloc(sizeof(NODE));
    
    newn->data=no;
    newn->next=NULL;

    //Travel till last node
    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        //add adress of new node at the end of last node
        temp->next=newn;   
    }
}


void DeleteFirst(PPNODE head)
{
    if(*head==NULL)
    {
        printf("Linked list is empty!");
        return;
    }   
    else if((*head)->next==NULL)    //case 2
    {
        free(*head);
        *head=NULL;
    } 
    else    //case 3
    {
        PNODE temp=*head;
        *head=(*head)->next;
        free(temp);
    }
}

void Display(PNODE head)
{
    printf("Elements of ll : ");
    while(head!=NULL)
    {
        printf("| %d | -> ",head->data);
        head=head->next;
    }
    printf("NULL");
}

int count(PNODE head)
{
    int iCnt=0;
    while(head!=NULL)
    {
        iCnt++;
        head=head->next;
    }
    return iCnt;
}

int main()
{
    PNODE first=NULL;
    insertFirst(&first,111);
    insertFirst(&first,101);
    insertFirst(&first,51);
    insertFirst(&first,21);
    insertFirst(&first,11);

    Display(first);
    int iret=0;
    iret=count(first);

    printf("\nNumber of elements in ll are :%d \n",iret);
    insertLast(&first,121);
    insertLast(&first,151);

    Display(first);
    iret=count(first);
    printf("\nNumber of elements in ll are :%d \n",iret);


    DeleteFirst(&first);

    Display(first);
    iret=count(first);
    printf("\nNumber of elements in ll are :%d \n",iret);


    return 0;
}