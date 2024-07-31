//Aceept n numbers from usser and perform adition of numbers

#include<iostream>
using namespace std;

// class demo{
//     public:

//         T arr[];
//         int len;
//         int sum;

//         int Addition(arr,len)
// }
template<class T>
T Addition(T arr[],int len)
{
    T sum=0;
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int size=0,iret=0;
    float fret=0;
    int *ptr=NULL;
    float *fptr=NULL;

    cout<<"Enter number of elwmwnts";
    cin>>size;


    ptr=new int[size];
    cout<<"Enter int elements";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    fptr=new float[size];
    cout<<"Enter float elements";
    for(int i=0;i<size;i++)
    {
        cin>>fptr[i];
    }
    iret=Addition(ptr,size);
    cout<<"Addition of all elemenrs of array is :"<<iret<<"\n";
  
    fret=Addition(fptr,size);
    cout<<"Addition of all elemenrs of array is :"<<fret<<"\n";

    delete []ptr;

    return 0;
}