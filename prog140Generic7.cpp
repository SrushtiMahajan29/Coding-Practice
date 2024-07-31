#include<iostream>
using namespace std;

template <class T>
void Swap(T n1,T n2)
{
    T temp;     //couldn't initialize
    temp=n1;
    n1=n2;
    n2=temp;
}

int main()
{
    double d1=9.087;
    double d2=8.976;

    cout<<"Value of d2 : "<<d1<<"\n";
    cout<<"Value of d2 : "<<d2<<"\n";

    Swap(d1,d2);

    cout<<"Value of d1 : "<<d1<<"\n";
    cout<<"Value of d2 : "<<d2<<"\n";
    return 0;
}