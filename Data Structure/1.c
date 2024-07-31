#include<stdio.h>
#include<stdlib.h>//malloc,calloc

//structure declaration

struct node
{
    int data;           //4 bytes
    struct node* next;   //8 bytes//self referantial structure//because ptr of struct used//we cant use object like ptr 
};

int main()
{
    struct node* first=NULL;//adress of first element of ll
    return 0;
}