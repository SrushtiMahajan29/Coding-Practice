#include<iostream>
using namespace std;

int iAddition(int no1,int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
float fAddition(float no1,float no2)
{
    float ans=0;
    ans=no1+no2;
    return ans;
}
double dAddition(double no1,double no2)
{
    double ans=0;
    ans=no1+no2;
    return ans;
}

int main()
{
    float fvalue1=10.5f,fvalue2=21.9f;
    int ivalue1=10,ivalue2=21;
    double dvalue1=10.569,dvalue2=21.987;
    int iret=0;
    float fret=0.0f;
    double dret=0.0;

    iret=iAddition(ivalue1,ivalue2);
    fret=fAddition(fvalue1,fvalue2);
    dret=dAddition(dvalue1,dvalue2);

    cout<<"Addition is: "<<iret<<"\n";
    cout<<"Addition is: "<<fret<<"\n";
    cout<<"Addition is: "<<dret<<"\n";
    return 0;
}