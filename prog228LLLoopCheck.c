// Check if is there any loop formed or  not 
// Create a implicit loop for checking purpose

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool LoopCheck(PNODE head)
{
    PNODE Student=head;
    PNODE Teacher=head;

    bool bflag=false;

    while((Teacher!=NULL)&&(Teacher->next!=NULL))
    {
        Student =Student->next;
        Teacher=Teacher->next->next;

        if(Student==Teacher)    
        {
            bflag=true;
            break;
        }
    }
    return bflag;
}

int main()
{
    PNODE First=NULL;
    bool bRet = false;

    PNODE ThirdNode = NULL;
    PNODE LastNode = NULL;

    InsertFirst(&First, 151);
    InsertFirst(&First, 121);
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    display(First);
    
    // ThirdNode = First;
    // LastNode = First;
    
    // ThirdNode = ThirdNode->next->next;
    // LastNode = LastNode->next->next->next->next;
    // LastNode->next = ThirdNode;

    bRet = LoopCheck(First);

    if(bRet == true)
    {
        printf("Loop detected in the linkedlist..\n");
    }
    else
    {
        printf("There is no Loop in the linkedlist..\n");
    }
    
    return 0;
}