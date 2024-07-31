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

    newn=(PNODE)malloc(sizeof(NODE));
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
            else if(no>temp->data)
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

void Inorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Inorder(Head->lchild);
        printf("%d\n",Head->data);
        Inorder(Head->rchild);
    }
}
void Preorder(PNODE Head)
{
    if(Head!=NULL)
    {
        printf("%d\n",Head->data);
        Preorder(Head->lchild);
        Preorder(Head->rchild);
    }
}
void Postorder(PNODE Head)
{
    if(Head!=NULL)
    {
        
        Postorder(Head->lchild);
        Postorder(Head->rchild);
        printf("%d\n",Head->data);
    }
}

int main()
{
    PNODE first=NULL;

//jar func tree che contents change karnar asel tar pass *first to it else if not changing contents then pass first
    Insert(&first,21);
    Insert(&first,11);
    Insert(&first,51);

    printf("Inorder traversal is : \n");
    Inorder(first);

    printf("Preorder traversal is : \n");
    Preorder(first);

    printf("Postorder traversal is : \n");
    Postorder(first);

    return 0;
}
