#include<iostream>
using namespace std;

class Arithmetic{
    public:
    int no1;
    int no2;

    Arithmetic(int A,int B);
    int Addition();
    int Substraction();
    int Multiplication();
    int Division();
};

/*
    Return_Value Class_Name :: Function_Name(Parameters)
    {
        Body
    }
*/

Arithmetic::Arithmetic(int A,int B)
    {
        this->no1=A;
        this->no2=B;
    }
int Arithmetic:: Addition()
    {
        int Ans=0;
        Ans=no1+no2;
        return Ans;
    }
int Arithmetic:: Substraction()
    {
        int Ans=0;
        Ans=no1-no2;
        return Ans;
    }
int Arithmetic:: Multiplication()
    {
        int Ans=0;
        Ans=no1*no2;
        return Ans;
    }
int Arithmetic:: Division()
    {
        int Ans=0;
        Ans=no1/no2;
        return Ans;
    }
int main()
{
    Arithmetic obj1(11,10);
    int iret=0;

    iret=obj1.Addition();
    cout<<"Addition is :"<<iret<<"\n";

    iret=obj1.Substraction();
    cout<<"Subs is :"<<iret<<"\n";

    iret=obj1.Multiplication();
    cout<<"Mult is :"<<iret<<"\n";

    iret=obj1.Division();
    cout<<"Division is :"<<iret<<"\n";
    
    
    

    return 0;
}