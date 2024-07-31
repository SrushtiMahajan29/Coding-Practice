#include<iostream>
using namespace std;

template <class T>
struct node{
    T data;
    struct node* next;
};

template <class T>
class Stack{
    private:
        struct node<T> * first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;    
        
    public:
        Stack();
        void push(T no);
        int pop();
        void display();
};

template <class T>
Stack<T>::Stack()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    count=0;
}

template <class T>
void Stack<T>::push(T no)
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
        newn->next=first;
        first=newn;
    }
    count++;
}

template <class T>
int Stack<T>::pop()
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

template <class T>
void Stack<T>::display()
{
    struct node<T> * temp=first;       
    cout<<"Elements of stack are : \n";
    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<"NULL\n";
}


int main()
{
    Stack <int>obj;

    obj.push(101);
    obj.push(51);
    obj.push(21);
    obj.push(11);

    obj.display();

    obj.pop();
    obj.pop();

    obj.display();

    return 0;
}