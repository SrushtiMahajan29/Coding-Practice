#include<iostream>
using namespace std;

void swap(int &no1,int &no2)//call by reference mhanun & jar & kadhale tar swap nahi honar
{
    int Temp;
    Temp=no1;
    no1=no2;
    no2=Temp;
}

int main()
{
    int iValue1 = 10, iValue2 = 11;

    cout<<"Value of ivalue1 : "<<iValue1;
    cout<<"Value of ivalue2 : "<<iValue2;

    swap(iValue1,iValue2);

     cout<<"Value of ivalue1 : "<<iValue1;
    cout<<"Value of ivalue2 : "<<iValue2;

    return 0;
}