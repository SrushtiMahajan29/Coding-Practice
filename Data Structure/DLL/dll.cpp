//Doubly linear-program22 .cpp
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL{
    private:
        PNODE first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;

    public:
        DoublyLL();
        void insertFirst(int no);
        void insertLast(int no);
        void insertAtPos(int no,int pos);
        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int pos);
        void display();
        int countNode();
};

DoublyLL::DoublyLL()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    count=0;
}

void DoublyLL::insertFirst(int no)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(first==NULL)// || count==0 
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        first->prev=newn;
        first=newn;
    }
    count++;

}
void DoublyLL::insertLast(int no)
{
    PNODE newn =NULL;
    newn=new NODE;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL)// || count==0 
    {
        first=newn;
    }
    else
    {
        PNODE temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
    count++;
}

void DoublyLL::deleteFirst()
{
    if(first==NULL)//               count==0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==NULL && first->prev==NULL)  //        count==1
    {
        delete first;
        first=NULL;
    }
    else                                //count>1
    {
        first=first->next;
        delete first->prev;
        first->prev=NULL;
    }
    count--;
}
void DoublyLL::deleteLast()
{
    if(first==NULL)//               count==0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==NULL && first->prev==NULL)//        count==1
    {
        delete first;
        first=NULL; 
    }
    else                                //count>1
    {
        PNODE temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        
        delete temp->next;
        temp->next=NULL;
    }
    count--;
}

void DoublyLL:: display()
{
    PNODE temp=first;
    cout<<"Elements of linked list are : \n";
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL\n";
    cout<<"\n Number of elements are: "<<count<<"\n";
}

int DoublyLL::countNode()
{
    return count;    
}

void DoublyLL::insertAtPos(int no,int ipos)
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
        newn->prev=NULL;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;

        count++;
    }
}

void DoublyLL::deleteAtPos(int ipos)
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
        temp->next->prev=temp;
        count--;
    }
}
int main()
{
    DoublyLL obj;
    
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