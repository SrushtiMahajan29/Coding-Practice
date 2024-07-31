#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void insertFirst(PPNODE head,PPNODE tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=no;

    if(*head==NULL && *tail==NULL)
    {
        *head=newn;
        *tail=newn;
    }
    else{

        newn->next=*head;
        (*head)->prev=newn;
        *head=newn;

    }
        (*head)->prev=*tail;
        (*tail)->next=*head;
}

void insertLast(PPNODE head,PPNODE tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->next=NULL;
    newn->prev=NULL;
    newn->data=no;

    if(*head==NULL && *tail==NULL)
    {
        *head=newn;
        *tail=newn;
    }
    else
    {
        newn->prev=*tail;
        (*tail)->next=newn;
        *tail=newn;
    }
        (*head)->prev=*tail;
        (*tail)->next=*head;
}

void deleteFirst(PPNODE head,PPNODE tail)
{
     if(*head==NULL && *tail==NULL)
     {
        printf("Linked list is empty");
        return;
     }
     else if(*head==*tail)
     {
        free(*head);
        // Free(*tail) both allowed
        *head=NULL;
        *tail=NULL;
     }
     else{
        *head=(*head)->next;
         free((*tail)->next);
         (*head)->prev=*tail;
        (*tail)->next=*head;
     }
}

void deleteLast(PPNODE head,PPNODE tail)
{
    if(*head==NULL && *tail==NULL)
     {
        printf("Linked list is empty");
        return;
     }
     else if(*head==*tail)
     {
        free(*head);
        // Free(*tail) both allowed
        *head=NULL;
        *tail=NULL;
     }
     else{
        *tail=(*tail)->prev;
        free((*tail)->next);
        (*head)->prev=*tail;
        (*tail)->next=*head;
     }
}

void display(PNODE head,PNODE tail)
{
    if(head!=NULL && tail!=NULL)
    {
        printf("address of first node %d\n",head);
        printf("Elements of linked list are: ");
        do
        {
            printf("%d\t",head->data);
            head=head->next;
        }
        while(head!=tail->next);
         printf("\naddress of first node %d\n",head);
    }
}

int count(PNODE head,PNODE tail)
{
    int count=0;
    if(head!=NULL && tail!=NULL)
    {
        do
        {
            head=head->next;
            count++;
        }
        while(head!=tail->next);
    }
    return count;
}
void insertAtPos(PPNODE head,PPNODE tail,int no,int pos)
{
    int iSize=0;
    iSize=count(*head,*tail);
    if(pos<1 || pos>iSize+1)
    {
        printf("Invalid Position");
        return;
    }
    else if(pos==1)
    {
        insertFirst(head,tail,no);
    }
    else if(pos==iSize+1)
    {
        insertLast(head,tail,no);
    }
    else{
        PNODE newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=no;
        newn->next=NULL;

        PNODE temp=*head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }
}
void deleteAtPos(PPNODE head,PPNODE tail,int pos)
{
    int iSize=0;
    iSize=count(*head,*tail);
    if(pos<1 || pos>iSize)
    {
        printf("Invalid Position");
        return;
    }
    else if(pos==1)
    {
        deleteFirst(head,tail);
    }
    else if(pos==iSize)
    {
        deleteLast(head,tail);
    }
    else{

        PNODE temp=*head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
        
    }
}
int main()
{
    int iret=0;
    PNODE first=NULL;
    PNODE last=NULL;

    insertFirst(&first,&last,51);
    insertFirst(&first,&last,21);
    insertFirst(&first,&last,11);

    insertLast(&first,&last,10);
    insertLast(&first,&last,20);
    insertLast(&first,&last,30);

    display(first,last);
    iret=count(first,last);
    printf("Number of elemants %d",iret);

    insertAtPos(&first,&last,105,5);
    display(first,last);
    iret=count(first,last);
    printf("Number of elemants %d",iret);

    deleteFirst(&first,&last);
    display(first,last);
    iret=count(first,last);
    printf("Number of elemants %d",iret);

    deleteLast(&first,&last);
    display(first,last);
    iret=count(first,last);
    printf("Number of elemants %d",iret);

    deleteAtPos(&first,&last,5);
    display(first,last);
    iret=count(first,last);
    printf("Number of elemants %d",iret);
    return 0;
}