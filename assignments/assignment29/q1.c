
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
//insert Linked List
void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

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

int display(PNODE head)    
{
    int count=0;
    while(head!=NULL)
    {
        printf("| %d |->",(head)->data);
        head=(head)->next;
    }
    printf("NULL\n");
}

/*Write a program which search first occurance of particular element from singly linear linked list
    Function should return position at which element is found*/
int firstOccPos(PNODE head,int no)    
{
    int count=1;
    while(head!=NULL)
    {
        if((head)->data==no)
        {
            break;
        }
        head=(head)->next;
        count++;
    }
    if(head!=NULL)
    {
        return count;
    }
    else
    {
        return -1;
    }
}
/*Write a program which search last occurance of particular element from singly linear linked list
    Function should return position at which element is found*/
int lastOccPos(PNODE head,int no)    
{
    int count=1;
    int pos=-1; 
    while(head!=NULL)
    {
        if((head)->data==no)
        {
            pos=count;          
        }
        head=(head)->next;
        count++;
    }
    return pos;
}
/*Write a program which addition of all elements from singly linear linked list*/

int addAll(PNODE head)
{
    int sum=0;
    while(head!=NULL)
    {
        sum=sum+(head)->data;
        head=(head)->next;
    }
    return sum;
}

/*Write a program which returns largest element from singly linear linked list*/
int Largest(PNODE head)
{
    int large=0;
    while(head!=NULL)
    {
        if(((head)->data)>=large)
        {
            large=(head)->data;
        }
        head=(head)->next;
    }
    return large;
}


/*Write a program which returns Smallest element from singly linear linked list*/
int Smallest(PNODE head)
{
    int small=10000000;
    while(head!=NULL)
    {
        if(((head)->data)<small)
        {
            small=(head)->data;
        }
        head=(head)->next;
    }
    return small;
}

int main()
{
    int ret1=0,ret2=0,ret3=0,ret4=0,ret5=0,ret6=0,no=0;
    PNODE first=NULL;
     InsertFirst(&first,6);
    InsertFirst(&first,30);
    InsertFirst(&first,51);
    InsertFirst(&first,30);
    InsertFirst(&first,31);
    InsertFirst(&first,28);
    InsertFirst(&first,51);
   
    display(first);
    printf("Enter element to search from linked list : ");
    scanf("%d",&no);
    ret1=firstOccPos(first,no);
    ret2=lastOccPos(first,no);
    printf("\nAddress of first occurance of %d is at %d\n",no,ret1);
    printf("\nAddress of last occurance of %d is at %d\n",no,ret2);

    //addAll
    ret3=addAll(first);
    printf("Addition of all elements in ll : %d\n",ret3);
    
    //Largest
    ret4=Largest(first);
    printf("Largest of all elements in ll : %d\n",ret4);
    
    //Smallest
    ret5=Smallest(first);
    printf("Smallest of all elements in ll : %d\n",ret5);

    //Perfect numbers
    printf("Perfect number of all elements in ll :\n");
    Perfect(first);
    return 0;
}