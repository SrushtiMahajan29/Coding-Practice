//Doubly linear-program22 .cpp
#include<iostream>
using namespace std;

template<class T>
struct node{
    T data;
    struct node* next;
    struct node* prev;
};

template <class T>
class DoublyLL{
    private:
        struct node<T> * first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;

    public:
        DoublyLL();
        void insertFirst(T no);
        void insertLast(T no);
        void insertAtPos(T no,int pos);
        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int pos);
        void display();
        int countNode();
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    count=0;
}

template<class T>
void DoublyLL<T>::insertFirst(T no)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T>;

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

template <class T>
void DoublyLL<T>::insertLast(T no)
{
    struct node<T> * newn =NULL;
    newn=new struct node<T>;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL)// || count==0 
    {
        first=newn;
    }
    else
    {
        struct node<T> * temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
    count++;
}

template <class T>
void DoublyLL<T>::deleteFirst()
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

template <class T>
void DoublyLL<T>::deleteLast()
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
        struct node<T> * temp=first;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        
        delete temp->next;
        temp->next=NULL;
    }
    count--;
}

template <class T>
void DoublyLL<T>:: display()
{
    struct node<T> * temp=first;
    cout<<"Elements of linked list are : \n";
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL\n";
    cout<<"\n Number of elements are: "<<count<<"\n";
}

template <class T>
int DoublyLL<T>::countNode()
{
    return count;    
}


template <class T>
void DoublyLL<T>::insertAtPos(T no,int ipos)
{
    struct node<T>* temp=first;
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
        struct node<T>* newn=NULL;
        newn=new struct node<T>;

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

template <class T>
void DoublyLL<T>::deleteAtPos(int ipos)
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
        struct node<T> * temp=first;
        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        struct node<T> * targatedNode=temp->next;
        temp->next=temp->next->next;
        delete targatedNode;
        temp->next->prev=temp;
        count--;
    }
}
int main()
{
    DoublyLL <int>obj;
    
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