#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
// typedef struct node** PPNODE;

class SinglyLL{
    public:
        PNODE first;//We cant initialize here bcoz memory is not allocated here Therefore we need constructor
        int count;

        SinglyLL()
        {
            first=NULL;
            count=0;
        }
        void insertFirst(int no)
        {

        }
        void insertLast(int no);
        void insertAtPos(int no);
        void deleteFirst(int no);
        void deleteLast(int no);
        void deleteAtPos(int no);
        void display();
};

int main()
{
    SinglyLL obj();
    obj.insertFirst(51);
    return 0;
}