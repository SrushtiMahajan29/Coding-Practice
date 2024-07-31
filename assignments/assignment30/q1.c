
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

/*Write a program which print perfect numbers from singly linear linked list*/

void Perfect(PNODE head)
{
    while(head!=NULL)
    {
        int sum=0;
        int current=head->data;

        if(current <0)                                                      //UPDATER
        {
            current=-current;
        }
        for(int i=1;i<=current/2;i++)
        {
            if(current%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==current)
        {
            printf("%d\t",current);
        }
        head=(head)->next;
    }
}

/*Write a program which print prime numbers from singly linear linked list*/

void Prime(PNODE head)
{
    while(head!=NULL)
    {
        int current=head->data;
        int flag=1;
        if(current <0)                                                      //UPDATER
        {
            current=-current;
        }
        for(int i=2;i<=current/2;i++)
        {
            if(current%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("%d\t",current);

        head=(head)->next;
    }
}

/*Write a program which print addition of all even numbers from singly linear linked list*/

int addEven(PNODE head)
{
    int sum=0;
    while(head!=NULL)
    {

        int current=head->data;
        if(current%2==0)
        {
            sum=sum+current;
        }
        head=head->next;
    }
    return sum;
}

/*Write a program which print 2nd largest numbers from singly linear linked list*/

int secondLargest(PNODE head)
{
    int largest=0;
    int larger=0;

    while(head!=NULL)
    {
        int current=head->data;
        if(current>largest)
        {
            largest=current;
            larger=largest;
        }
        head=head->next;
    }
    return larger;
}


/*Write a program which return sum of digits from singly linear linked list*/

void SumDigits(PNODE head)
{
    
    while(head!=NULL)
    {
        int sum=0,digit=0;
        int current=head->data;
        while(current!=0)
        {
            sum=sum+(current%10);
            current=current/10;
            
        }
        
        printf("Sum of digits of %d is %d\n",head->data,sum);
        head=head->next;
    }
}

int main()
{
    int ret1=0,ret2=0,ret3=0,ret4=0,ret5=0,ret6=0,no=0;
    PNODE first=NULL;
    InsertFirst(&first,6);
    InsertFirst(&first,30);
    InsertFirst(&first,7);
    InsertFirst(&first,30);
    InsertFirst(&first,31);
    InsertFirst(&first,28);
    InsertFirst(&first,51);
   
    display(first);
    
    //Perfect numbers
    printf("Perfect number of all elements in ll :\n");
    Perfect(first);

    //Prime numbers
    printf("\nPrime number of all elements in ll :\n");
    Prime(first);
    //Prime numbers
    ret1=addEven(first);
    printf("\nSum of of all even elements in ll :%d\n",ret1);

    //second largest
    ret2=secondLargest(first);
    printf("\nSecond largest element is %d\n\n",ret2);

    //sum of digits
    SumDigits(first);
    return 0;
}