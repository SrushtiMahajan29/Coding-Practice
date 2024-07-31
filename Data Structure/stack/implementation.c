#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Push(PPNODE top,int no)
{
    PNODE newn=NULL;
    newn=(PNODE )malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*top==NULL)
    {
        *top=newn;
    }
    else
    {
        newn->next=*top;
        *top=newn;

    }
}

int Pop(PPNODE top)
{
    int value=0;
    PNODE temp=*top;
    if(*top==NULL)
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        value=(*top)->data;
        *top=(*top)->next;
        free(temp);
    }
    return value;
}

void display(PNODE top)
{
    while(top!=NULL)
    {
        printf("\t|   %d   |\n",top->data);
        top=top->next;
    }   
        printf("\t|  NULL  |\n");
}

/*int main()
{
    int choice,no=0,check=1,iret=0;
    PNODE first=NULL; 
    do{
        printf("MENU\n1.Push\n2.Pop\n3.Display\n");
        scanf("%d",&choice);

        switch(choice)
        {

            case 1: printf("Enter number to push: \n");scanf("%d",&no);
                    
                    Push(&first,no); 
                    break;
            case 2: iret=Pop(&first);
                    printf("Returned :%d\n",iret);
                    break;
            case 3: display(first);
                    break;
        } 
        printf("Enter 1 to continue"); 
        scanf("%d",&check);

    }while(check==1);
   
    
    return 0;
}*/

int main()
{
    int iret=0;
    PNODE first=NULL; 
    Push(&first,51);
    Push(&first,21);
    Push(&first,11);

    display(first);

    iret=Pop(&first);
    printf("Returned: %d\n",iret);
    display(first);

    iret=Pop(&first);
    printf("Returned: %d\n",iret);
        iret=Pop(&first);
    printf("Returned: %d\n",iret);
        iret=Pop(&first);
    printf("Returned: %d\n",iret);
    display(first);
    return 0;
}