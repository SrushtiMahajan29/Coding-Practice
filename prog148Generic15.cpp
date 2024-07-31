//Aceept n numbers from usser and perform adition of numbers

#include<iostream>
using namespace std;
template <class T>
class Array{
    public:

        T *Arr;
        int len;

        Array(int len);
        ~Array();
        void Accept();
        void Display();
        T Addition();
};
template <class T>
Array<T> :: Array(int length)
    {
        len=length;
        Arr=new T[len];
    }

template <class T>
Array<T> :: ~Array()
    {
        delete []Arr;
    }
template <class T>
void Array<T>::Accept()
{
    cout<<"Enter the elements : ";
    int iCnt=0;

    for(iCnt=0;iCnt<len;iCnt++)
    {
        cin>>Arr[iCnt];
    }

}
template<class T>
void Array<T>:: Display()
{
    cout<<"Elements of Array : ";
    for(int iCnt=0;iCnt<len;iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}
template <class T>
T Array<T> :: Addition()
{
    T sum=0;
    for(int iCnt=0;iCnt<len;iCnt++)
    {
        sum=sum+Arr[iCnt];
    }
    return sum;
}
int main()
{
   Array <int>obj(5);
   obj.Accept();
   obj.Display();

   int iret=obj.Addition();
   cout<<"Addition of elements : "<<iret<<"\n";

    return 0;
}