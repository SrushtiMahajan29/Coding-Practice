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

void DeleteLast(PPNODE head)
{
    PNODE temp=*head;                       //
    if(*head==NULL)                         //no elemennt
    {
        printf("Linked list is empty!");
        return;
    }   
    else if((*head)->next==NULL)    //case 2 single element
    {
        free(*head);
        *head=NULL;
    } 
    else                                    //case 3 last element
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        
        temp->next=NULL;
    }
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

void InsertAtPos(PPNODE head, int no, int iPos)
{
    int Size=0;

    PNODE newn=NULL;
    int i=0;
    PNODE temp=*head;

    Size=count(*head);//call by value(100)
    
    //Case1: Invalid Position (ex.11,-2,8)

    if((iPos<1) || (iPos>Size+1))
    {
        printf("Invalid position");
        return;
    }
    //case 2:First Position (ex.1)

    if(iPos==1)
    {
        insertFirst(head,no);
    }

    //case 3: Last Position (ex. 7)

    else if(iPos==Size+1)
    {
        insertLast(head,no);
    }

    //case 4: Position in between first and last (ex. 5)

    else
    {
       newn=(PNODE)malloc(sizeof(NODE));
       newn->data=no;
       newn->next=NULL;

       for(i=0;i<iPos-1;i++)
       {
        temp=temp->next;
       } 
       newn->next=temp->next;
       temp->next=newn;
    }

}

void DeleteAtPos(PPNODE head, int iPos)
{
    int i=0;
    int Size=count(*head);//call by value(100)
    PNODE temp=*head;
    PNODE targetednode=NULL;
    //Case1: Invalid Position (ex.11,-2,7,8)

    if((iPos<1) || (iPos>Size))//size becoz delete 
    {
        printf("Invalid position");
        return;
    }
    //case 2:First Position (ex.1)

    if(iPos==1)
    {
        DeleteFirst(head);
    }

    //case 3: Last Position (ex. 6)

    else if(iPos==Size)
    {
        DeleteLast(head);
    }

    //case 4: Position in between first and last (ex. 5)

    else
    {
        for(i=0;i<iPos-1;i++)
        {
        temp=temp->next;
        }
        targetednode=temp->next;

        temp->next=temp->next->next;

        free(targetednode);
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



int main()
{
     PNODE first=NULL;
    int iret=0;
    insertFirst(&first,121);
    insertFirst(&first,111);
    insertFirst(&first,101);
    insertFirst(&first,51);
    insertFirst(&first,21);
    insertFirst(&first,11);

    Display(first);
    iret=count(first);
    printf("\nNumber of elements in linked last are :%d \n",iret);

    InsertAtPos(&first,105,5);
     Display(first);
    iret=count(first);
    printf("\nNumber of elements in linked last are :%d \n",iret);
    
    DeleteAtPos(&first,5);
     Display(first);
    iret=count(first);
    printf("\nNumber of elements in linked last are :%d \n",iret);

    return 0;
}