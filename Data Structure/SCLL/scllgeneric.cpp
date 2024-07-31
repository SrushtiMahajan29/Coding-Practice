//Singly circular-program226.cpp
#include<iostream>
using namespace std;

template<class T>
struct node{
    T data;
    struct node* next;
};

template<class T>
class SinglyCLL{
    private:
        struct node<T> * first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        struct node<T> * last;
        int count;
    
        
    public:
        SinglyCLL();
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
SinglyCLL<T>::SinglyCLL()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    last=NULL;
    count=0;
}
template<class T>
void SinglyCLL<T>::insertFirst(T no)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T>;

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

template <class T>
void SinglyCLL<T>::insertLast(T no)
{
    struct node<T> * newn =NULL;
    newn=new struct node<T>;

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

template <class T>
void SinglyCLL<T>::deleteFirst()
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

template<class T>
void SinglyCLL<T>::deleteLast()
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
        struct node<T> * temp=first;
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

template <class T>
void SinglyCLL<T>:: display()
{
    cout<<"Elements of linked list are : \n";
    do{
        cout<<"| "<<first->data<<" |->";
        first=first->next;
    }
    while(first!=last->next);
    cout<<"NULL\n";
}
template <class T>
int SinglyCLL<T>::countNode()
{
    return count;    
}

template <class T>
void SinglyCLL<T>::insertAtPos(T no,int ipos)
{
    struct node <T> * temp=first;
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
        struct node<T> * newn=NULL;
        newn=new struct node<T>;

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

template<class T>
void SinglyCLL<T>::deleteAtPos(int ipos)
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
        count--;
    }
}
int main()
{
    SinglyCLL <int>iobj;
    SinglyCLL <float>fobj;
    SinglyCLL <double>dobj;
    SinglyCLL <char>cobj;
   

    iobj.insertLast(101);
    iobj.insertLast(111);
    iobj.insertLast(121);
    iobj.insertLast(131);
    iobj.insertLast(141);
    iobj.display();

    fobj.insertLast(1.32501);
    fobj.insertLast(1.2511);
    fobj.insertLast(12.651);
    fobj.insertLast(13.121);
    fobj.insertLast(141.32);
    fobj.display();

    dobj.insertLast(10.3651);
    dobj.insertLast(11.1);
    dobj.insertLast(1.21);
    dobj.insertLast(131.324);
    dobj.insertLast(141.3654);
    dobj.display();

    cobj.insertLast('S');
    cobj.insertLast('R');
    cobj.insertLast('U');
    cobj.insertLast('S');
    cobj.insertLast('H');
    cobj.display();

    return 0;
}