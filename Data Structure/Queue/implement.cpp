#include<iostream>
using namespace std;
z
struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class Queue{
    private:
        PNODE first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;    
        
    public:
        Queue();
        void Enqueue(int no);
        int Dequeue();
        void display();
};
Queue::Queue()
{
    cout<<"Inside constructor\n\n";
    first=NULL;
    count=0;
}
void Queue::Enqueue(int no)
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

int Queue::Dequeue()
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
void Queue::display()
{
    PNODE temp=first;       
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
    Queue obj;

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