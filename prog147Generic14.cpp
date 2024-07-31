//Aceept n numbers from usser and perform adition of numbers

#include<iostream>
using namespace std;

class Array{
    public:

        int *Arr;
        int len;

        Array(int len);
        ~Array();
        void Accept();
        void Display();
        int Addition();
};
Array::Array(int length)
    {
        len=length;
        Arr=new int[len];
    }

Array :: ~Array()
    {
        delete []Arr;
    }

void Array::Accept()
{
    cout<<"Enter the elements : ";
    int iCnt=0;

    for(iCnt=0;iCnt<len;iCnt++)
    {
        cin>>Arr[iCnt];
    }

}

void Array:: Display()
{
    cout<<"Elements of Array : ";
    for(int iCnt=0;iCnt<len;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int Array:: Addition()
{
    int sum=0;
    for(int iCnt=0;iCnt<len;iCnt++)
    {
        sum=sum+Arr[iCnt];
    }
    return sum;
}
int main()
{
   Array obj(5);
   obj.Accept();
   obj.Display();

   int iret=obj.Addition();
   cout<<"Addition of elements : "<<iret<<"\n";

    return 0;
}