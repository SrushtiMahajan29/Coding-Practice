#include<iostream>
using namespace std;

void swap(double &no1,double &no2)//call by reference mhanun & jar & kadhale tar swap nahi honar
{
    double Temp;
    Temp=no1;
    no1=no2;
    no2=Temp;
}

int main()
{
    double fValue1 = 10.21, fValue2 = 5.11;

    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";

    swap(fValue1,fValue2);

    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";

    return 0;
}

