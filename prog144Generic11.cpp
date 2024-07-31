//Aceept n numbers from usser and perform adition of numbers

#include<iostream>
using namespace std;

int Addition(int arr[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int size=0,iret=0;
    int *ptr=NULL;

    cout<<"Enter number of elwmwnts";
    cin>>size;


    ptr=new int[size];

    cout<<"Enter elements";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    
    iret=Addition(ptr,size);
    cout<<"Addition of all elemenrs of array is :"<<iret;

    delete []ptr;

    return 0;
}