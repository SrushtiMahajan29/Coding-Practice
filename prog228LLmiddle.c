// Display middle element of linked list with least time complexity

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next; 
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
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

void display(PNODE head)
{
    printf("Contents of LL: \n");

    while(head!=NULL)
    {
        printf("| %d |->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

int displayMiddle(PNODE head)
{
    PNODE Teacher=head;
    PNODE Student=head;

    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Teacher=Teacher->next->next;
        Student=Student->next;
    }
    return (Student->data);
}

int main()
{
    PNODE First=NULL;
    int iRet = 0;

    InsertFirst(&First, 151);
    InsertFirst(&First, 121);
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    display(First);

    iRet = displayMiddle(First);

    printf("Middle element is : %d\n",iRet);

    return 0;

}