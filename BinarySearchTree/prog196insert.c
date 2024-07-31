#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int no)//PPNODE ka - Going to make changes in tree
{
    PNODE newn=NULL;
    PNODE temp=*Head;

    newn=(PNODE)mallocc(sizeof(NODE));
    newn->data=no;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*Head==NULL) //BST is empty
    {
        *Head=newn;
    }
    else    //BST contains at least one node
    {
        while(1)//Unconditional loop
        {
            if(no==temp->data)
            {
                printf("Unable to insert as it already present");
                free(newn);
                break;
            }
            else if(no>*temp->data)
            { 
                if(temp->rchild==NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            
            }
            else if (no<temp->data)
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newn;
                    break;
                }
                temp=temp->lchild;
            }

        }
    }

}


int main()
{
    PNODE first=NULL;

//jar func tree che contents change karnar asel tar pass *first to it else if not changing contents then pass first

    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,51);

    return 0;
}
