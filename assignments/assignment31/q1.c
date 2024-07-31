
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

/*Write a program which reverse each element from singly linear linked list*/

void Reverse(PNODE head)
{
    while(head!=NULL)
    {
        int new=0,digit=0;
        int current=head->data;
        while(current!=0)       
        {
            digit=current%10;
            
            new=(new*10)+digit;

            current=current/10;
        }
        printf("%d is reversed to %d\n",head->data,new);
        head=(head)->next;
    }
}

/*Write a program which print all palindrome elements from singly linear linked list*/

void Palindrome(PNODE head)
{
    printf("Palindrome elements :\n");
    while(head!=NULL)
    {
        int new=0,digit=0;
        int current=head->data;
        while(current!=0)       
        {
            digit=current%10;
            
            new=(new*10)+digit;

            current=current/10;
        }
        if(new==head->data)
        {
            printf("%d\t",new);
        }
        head=(head)->next;
    }
}

/*Write a program which print product of all digits of all elements from singly linear linked list(Dont consider 0)*/

int Product(PNODE head)
{
    while(head!=NULL)
    {
    int new=1,digit=0;
    int current=head->data;
    while(current!=0)       
    {
        digit=current%10;
        if(digit!=0)
        new=new*digit;

        current=current/10;
    }
        printf("Product of digits of %d is %d\t\n",head->data,new);
    
    head=(head)->next;
    }
    
}

/*Write a program which print smallest digit from all digits of element from singly linear linked list*/

void Smallest(PNODE head)
{
    while(head!=NULL)
    {
        int new=10000,digit=0;
        int current=head->data;
        while(current!=0)       
        {
            digit=current%10;
            if(digit<new)
            new=digit;
            current=current/10;
        }
        printf("%d is smallest to %d\n",new,head->data);
        head=(head)->next;
    }
}


/*Write a program which display largest digit from all digits of elements from singly linear linked list*/

void Largest(PNODE head)
{
    while(head!=NULL)
    {
        int new=0,digit=0;
        int current=head->data;
        while(current!=0)       
        {
            digit=current%10;
            if(digit>new)
            new=digit;
            current=current/10;
        }
        printf("%d is largest to %d\n",new,head->data);
        head=(head)->next;
    }
}

int main()
{
    int ret1=0,ret2=0,ret3=0,ret4=0,ret5=0,ret6=0,no=0;
    PNODE first=NULL;
    InsertFirst(&first,6);
    InsertFirst(&first,30);
    InsertFirst(&first,77);
    InsertFirst(&first,30);
    InsertFirst(&first,31);
    InsertFirst(&first,28);
    InsertFirst(&first,51);
   
    display(first);
    
    //Reverse a number
    Reverse(first);

    //Palindrome number
    Palindrome(first);

    //Product numbers
    Product(first);

    //smallest
    Smallest(first);
    
    //sum of digits
    Largest(first);
    return 0;
}