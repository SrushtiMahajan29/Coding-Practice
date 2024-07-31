#include<iostream>
using namespace std;

template<class T>
struct node{
    T data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

template<class T>
class SinglyLL{
    private:
        PNODE first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;
    
        
    public:
        SinglyLL();
        void insertFirst(int no);
        void insertLast(int no);
        void insertAtPos(int no,int pos);
        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int pos);
        void display();
        int countNode();
};

SinglyLL::SinglyLL()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    count=0;
}

void SinglyLL::insertFirst(int no)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL)// || count==0 
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        first=newn;
    }
    count++;

}
void SinglyLL::insertLast(int no)
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

    }
    count++;
}

void SinglyLL::deleteFirst()
{
    if(first==NULL)//               count==0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==NULL)//        count==1
    {
        delete first;
        first=NULL;
        
    }
    else                                //count>1
    {
        PNODE temp=first;
        first=first->next;
        delete temp;
    }
    count--;
}
void SinglyLL::deleteLast()
{
    if(first==NULL)//               count==0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first->next==NULL)//        count==1
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

void SinglyLL:: display()
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

int SinglyLL::countNode()
{
    return count;    
}

void SinglyLL::insertAtPos(int no,int ipos)
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

void SinglyLL::deleteAtPos(int ipos)
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
    SinglyLL obj;
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

    // cout<<count;                 cant access as its  a private member
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