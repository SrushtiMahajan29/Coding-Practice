#include<iostream>
using namespace std;

class Arithmetic{
    public:
    int no1;
    int no2;
    Arithmetic(int A,int B)
    {
        this->no1=A;
        this->no2=B;
    }

    int Addition()
    {
        int Ans=0;
        Ans=no1+no2;
        return Ans;
    }
};

int main()
{
    Arithmetic obj1(11,10);
    int iret=0;

    iret=obj1.Addition();
    cout<<"Addition is :"<<iret<<"\n";

    return 0;
}