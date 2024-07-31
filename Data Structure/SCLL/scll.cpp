//Singly circular-program226.cpp
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCLL{
    private:
        PNODE first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        PNODE last;
        int count;
    
        
    public:
        SinglyCLL();
        void insertFirst(int no);
        void insertLast(int no);
        void insertAtPos(int no,int pos);
        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int pos);
        void display();
        int countNode();
};

SinglyCLL::SinglyCLL()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    last=NULL;
    count=0;
}

void SinglyCLL::insertFirst(int no)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL && last==NULL)// || count==0 
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        first=newn;
    }
    last->next=first;

    count++;

}
void SinglyCLL::insertLast(int no)
{
    PNODE newn =NULL;
    newn=new NODE;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL&& last==NULL)// || count==0 
    {
        first=newn;
        last=newn;
        last->next=first;
    }
    else
    {
        last->next=newn;
        last=newn;
        last->next=first;
    }
    count++;

}

void SinglyCLL::deleteFirst()
{
    if(first==NULL && last ==NULL)//               count==0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==first && last->next==first)//        count==1
    {
        delete first;
        first=NULL;
        last=NULL;   
    }
    else                                //count>1
    {
        first=first->next;
        delete last->next;
        last->next=first;
    }
    count--;
}
void SinglyCLL::deleteLast()
{ 
    if(first==NULL && last ==NULL)//               count==0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==first && last->next==first)//        count==1
    {
        delete first;
        first=NULL;
        last=NULL;   
    }
    else                                //count>1
    {
        PNODE temp=first;
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        
        delete last;
        last=temp;
        last->next=first;
    }
    count--;
}

void SinglyCLL:: display()
{
    cout<<"Elements of linked list are : \n";
    do{
        cout<<"| "<<first->data<<" |->";
        first=first->next;
    }
    while(first!=last->next);
    cout<<"NULL\n";
}

int SinglyCLL::countNode()
{
    return count;    
}

void SinglyCLL::insertAtPos(int no,int ipos)
{
    PNODE temp=first;
    if(ipos<1 || ipos>count+1)// || count==0 
    {
        cout<<"Invalid position";
        return;
    }
    else if(ipos==1)
    {
        insertFirst(no);
    }
    else if(ipos==count+1)
    {
        insertLast(no);
    }
    else
    {
        PNODE newn=NULL;
        newn=new NODE;

        newn->data=no;
        newn->next=NULL;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        count++;
    }
}

void SinglyCLL::deleteAtPos(int ipos)
{

    if(ipos<1 || ipos>count)// || count==0 
    {
        cout<<"Invalid position";
        return;
    }
    else if(ipos==1)
    {
        deleteFirst();
    }
    else if(ipos==count)
    {
        deleteLast();
    }
    else
    {
        PNODE temp=first;
        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        PNODE targatedNode=temp->next;
        temp->next=temp->next->next;
        delete targatedNode;
        count--;
    }
}
int main()
{
    SinglyCLL obj;
    obj.insertFirst(51);
    obj.insertFirst(41);
    obj.insertFirst(31);
    obj.insertFirst(21);
    obj.insertFirst(11);
    obj.insertFirst(1);
    obj.insertFirst(0);
    obj.display();

    obj.insertLast(101);
    obj.insertLast(111);
    obj.insertLast(121);
    obj.insertLast(131);
    obj.insertLast(141);
    obj.display();

   // cout<<count;                 //cant access as its  a private member
    int iret=obj.countNode();
    cout<<"Count of nodes is "<<iret;

    obj.deleteFirst();
    obj.display();
    obj.countNode();

    obj.deleteLast();
    obj.display();
    obj.countNode();

    cout<<"Insert at \n";
    obj.insertAtPos(105,5);
    obj.display();
    obj.countNode();


    cout<<"dELETE AT 5\n";
    obj.deleteAtPos(5);
    obj.display();
    obj.countNode();


    return 0;
}