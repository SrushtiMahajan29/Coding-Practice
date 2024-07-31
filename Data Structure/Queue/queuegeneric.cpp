#include<iostream>
using namespace std;

template<class T>
struct node{
    T data;
    struct node* next;
};

template<class T>
class Queue{
    private:
        struct node<T> * first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;    
        
    public:
        Queue();
        void Enqueue(T no);
        int Dequeue();
        void display();
};


template<class T>
Queue<T>::Queue()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    count=0;
}

template<class T>
void Queue<T>::Enqueue(T no)
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

    }
    count++;
}

template<class T>
int Queue<T>::Dequeue()
{
    int value=0;       
    struct node<T> * temp=first;
    if(first==NULL)//               count==0
    {
        cout<<"Queue is empty\n";
        return 0;
    }
    else                                //count>1
    {
        value=(first)->data; 
        first=first->next;
        delete temp;
    }
    count--;
}

template<class T>
void Queue<T>::display()
{
    struct node<T> * temp=first;       
    cout<<"Elements of queue are : \n";
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}


int main()
{
    Queue <int>obj;

    obj.Enqueue(101);
    obj.Enqueue(51);
    obj.Enqueue(21);
    obj.Enqueue(11);

    obj.display();

    obj.Dequeue();
    obj.Dequeue();

    obj.display();

    return 0;
}