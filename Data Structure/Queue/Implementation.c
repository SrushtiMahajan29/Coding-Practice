#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Enqueue(PPNODE front,int no)
{
    PNODE temp=*front;

    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*front==NULL)
    {
        *front=newn;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        //add adress of new node at the end of last node
        temp->next=newn;   
    }
}

int Dequeue(PPNODE front)
{
    int value=0;
    PNODE temp=*front;
    if(*front==NULL)
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
    {
        value=(*front)->data;
        *front=(*front)->next;
        free(temp);
    }
    return value;
}

void display(PNODE front)
{
    printf("Elements of queue are");
    while(front!=NULL)
    {
        printf("\t|   %d   |",front->data);
        front=front->next;
    }   
        printf("\n");
}


int main()
{
    PNODE first=NULL; 

    Enqueue(&first,10);
    Enqueue(&first,20);
    Enqueue(&first,30);

    display(first);

    Dequeue(&first);
    Dequeue(&first);

    display(first);
    return 0;
}