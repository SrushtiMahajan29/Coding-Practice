//Doubly circular-program226.cpp
#include<iostream>
using namespace std;

template<class T>
struct node{
    T data;
    struct node* next;
    struct node* prev;
};


template <class T>
class DoublyCLL{
    private:
        struct node<T> * first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        struct node<T> * last;
        int count;
    
        
    public:
        DoublyCLL();
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
DoublyCLL<T> ::DoublyCLL()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    last=NULL;
    count=0;
}

template <class T>
void DoublyCLL<T>::insertFirst(T no)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T>;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL)// || count==0 
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        first->prev=newn;
        first=newn;
    }
    first->prev=last;
    last->next=first;
    count++;

}


template <class T>
void DoublyCLL<T>::insertLast(T no)
{
    struct node<T> * newn =NULL;
    newn=new struct node<T>;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL)// || count==0 
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->prev=last;
        last->next=newn;
        last=newn;

    }
    first->prev=last;
    last->next=first;
    count++;
}

template <class T>
void DoublyCLL<T>::deleteFirst()
{
    if(first==NULL && last==NULL)//               count==0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(first==last)//        count==1
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else                                //count>1
    {
        first=first->next;
        delete last->next;
        first->prev=last;
        last->prev=first;
    }
    count--;
}
// void DoublyCLL::deleteLast()
// {
//     if(first==NULL && last==NULL)//               count==0
//     {
//         cout<<"Linked list is empty\n";
//         return;
//     }
//     else if(first->next==first && last->next==first)//        count==1
//     {
//         cout<<"HII1";
//         delete first;
//         first=NULL; 
//         last=NULL;
//     }
//     else                                //count>1
//     {

//         last = last->prev;
// last->next = first; // Update the next pointer of the new last node
// first->prev = last; // Update the prev pointer of the first node
// delete last->next;  // Delete the old last node
 
//     }
//     count--;
// }


template <class T>
void DoublyCLL<T>::deleteLast()
{
    if (first == NULL && last == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    else if (first->next == first && last->next == first)
    {
        cout << "HII1";
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;
        last->next = first; // Update the next pointer of the new last node
        first->prev = last; // Update the prev pointer of the first node
    }
    count--;
}


template <class T>
void DoublyCLL<T>:: display()
{
    struct node<T> * temp=first;
    cout<<"Elements of linked list are : \n";
   
    do{
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }while(temp!=last->next);
    cout<<"NULL\n";
  
}

template <class T>
int DoublyCLL<T>::countNode()
{
    return count;    
}

template <class T>
void DoublyCLL<T>::insertAtPos(T no,int ipos)
{
    struct node<T> * temp=first;
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
void DoublyCLL<T>::deleteAtPos(int ipos)
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
        // PNODE targatedNode=temp->next;
        // temp->next=temp->next->next;
        // delete targatedNode;
        // temp->next->prev=temp;
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        count--;
    }
}
int main()
{
    DoublyCLL <int>obj;
        obj.insertFirst(51);
        cout<<"First inserted\n";
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

    // obj.deleteLast();
    obj.display();
    obj.countNode();

    cout<<"Insert at \n";
    // obj.insertAtPos(105,5);
    obj.display();
    obj.countNode();


    cout<<"dELETE AT 5\n";
    obj.deleteAtPos(5);
    obj.display();
    obj.countNode();
    

    return 0;
}