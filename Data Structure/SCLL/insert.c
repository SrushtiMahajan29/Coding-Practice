#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void insertFirst(PPNODE head,PPNODE tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    
    newn->next=NULL;
    newn->data=no;

    if(*head==NULL && *tail==NULL)//LL is empty
    {
        *head=newn;
        *tail=newn;                                 //#
        // *tail->newn=*head;
    }
    else    //LL contains at least one
    {
        newn->next=*head;
        *head=newn;
        // *tail->next=*head;
    } 
    (*tail) ->next=*head;
}

void insertLast(PPNODE head,PPNODE tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    
    newn->next=NULL;
    newn->data=no;

     if(*head==NULL && *tail==NULL)//LL is empty
    {
        *head=newn;
        *tail=newn;
        (*tail) ->next=*head;
    }
    else
    {
        (*tail)->next=newn;
        *tail=newn;
        (*tail)->next=*head;
    }
}

void deleteFirst(PPNODE head,PPNODE tail)
{

    if(*head==NULL && *tail==NULL) //LL is empty : case 1
    {
        printf("Linked list is empty");
        return;
    }
    // else if(*head->next==*head && *tail->next=*head)    //LL contains at least one //case 2
    else if(*head==*tail)    //LL contains at least one
    { 
        free(*head);
        *head=NULL;
        *tail=NULL;
    } 
    else{
        *head=(*head)->next;
        free((*tail)->next);
    }
}
void deleteLast(PPNODE head,PPNODE tail)
{
     if(*head==NULL && *tail==NULL) //LL is empty : case 1
    {
        printf("Linked list is empty");
        return;
    }
    // else if(*head->next==*head && *tail->next=*head)    //LL contains at least one //case 2
    else if(*head==*tail)    //LL contains at least one
    { 
        free(*head);
        *head=NULL;
        *tail=NULL;
    } 
    else
    {
        PNODE temp=*head;
        while(temp->next!=*tail)
        {
            temp=temp->next;        
        }

        // free(temp->next);
        free(*tail);
        *tail=temp;
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
    int cnt=0;
    if(head!=NULL && tail!=NULL)
    {do
        {
            cnt++;
            head=head->next;
        }
        while(head!=tail->next);
    }
    return cnt;
}


void insertAtPos(PPNODE head,PPNODE tail,int pos,int no)
{
    int size=0,i=0;
    size=count(*head,*tail);
    if(pos<1 || pos>size+1)
    {
        printf("Invalid position");
    }
    else if(pos==1)
    {
        insertFirst(head,tail,no);
    }
    else if(pos==size+1)
    {
        insertLast(head,tail,no);
    }
    else
    {
        PNODE newn=NULL;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->next=NULL;
        newn->data=no;

        PNODE temp=*head;

        for(i=1;i<pos-1;i++)
        {
          temp=temp->next;
        } 
        newn->next=temp->next;
        temp->next=newn;       
    }
}


void deleteAtPos(PPNODE head,PPNODE tail,int pos)
{
    int size=0,i=0;
    PNODE targatedNode=NULL;
    size=count(*head,*tail);
    if(pos<1 || pos>size)
    {
        printf("Invalid position");
    }
    else if(pos==1)
    {
        deleteFirst(head,tail);
    }
    else if(pos==size)
    {
        deleteLast(head,tail);
    }
    else
    {
        PNODE temp=*head;

        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        } 
        temp->next=temp->next->next;      

        targatedNode=temp->next;

        free(targatedNode);   
    }
}

int main()
{
    PNODE first =NULL;
    PNODE last=NULL;    //#

    insertFirst(&first,&last,21);
    insertFirst(&first,&last,51);
    insertFirst(&first,&last,101);

    insertLast(&first,&last,10);
    insertLast(&first,&last,20);
    insertLast(&first,&last,30);

    display(first,last);
    int iret=0;
    iret=count(first,last);
    printf("\nELements in ll are: %d\n",iret);

    insertAtPos(&first,&last,5,105);
    display(first,last);
    iret=count(first,last);
    printf("\nELements in ll are: %d\n",iret);

    deleteFirst(&first,&last);

    display(first,last);
    iret=count(first,last);
    printf("\nELements in ll are: %d\n",iret);

    deleteLast(&first,&last);

    display(first,last);
    iret=count(first,last);
    printf("\nELements in ll are: %d\n",iret);
    
    deleteAtPos(&first,&last,5);

    display(first,last);
    iret=count(first,last);
    printf("\nELements in ll are: %d\n",iret);


    return 0;
}