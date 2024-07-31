#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class Stack{
    private:
        PNODE first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;    
        
    public:
        Stack();
        void push(int no);
        int pop();
        void display();
};
Stack::Stack()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    count=0;
}
void Stack::push(int no)
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
        newn->next=first;
        first=newn;
    }
    count++;
}

int Stack::pop()
{
    int value=0;       
    PNODE temp=first;
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
void Stack::display()
{
    PNODE temp=first;       
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
    Stack obj;

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