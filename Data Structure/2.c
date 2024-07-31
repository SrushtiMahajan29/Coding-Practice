#include<stdio.h>
#include<stdlib.h>//malloc,calloc

//structure declaration

struct node
{
    int data;           //4 bytes
    struct node* next;   //8 bytes//self referantial structure//because ptr of struct used//we cant use object like ptr 
};

typedef struct node NODE;       //1 dozen means 12 keli to make it readable
typedef struct node* PNODE;     //pointer to node
typedef struct node** PPNODE;    //pointer to pointer

int main()
{
    PNODE first=NULL;//adress of first element of ll
    return 0;
}