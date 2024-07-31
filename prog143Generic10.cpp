#include<iostream>
using namespace std;
// 1:30
template<class T>
class Arithmetic{
    public:
    T no1;
    T no2;

    Arithmetic(T A,T B);
    T Addition();
    T Substraction();
    T Multiplication();
    T Division();
};

template <class T>
Arithmetic<T> :: Arithmetic(T A,T B)
    {
        this->no1=A;
        this->no2=B;
    }
template <class T>
T Arithmetic<T>:: Addition()
    {
        T Ans=0;
        Ans=no1+no2;
        return Ans;
    }
template <class T>
T Arithmetic<T>:: Substraction()
    {
        T Ans=0;
        Ans=no1-no2;
        return Ans;
    }
template <class T>
T Arithmetic<T>:: Multiplication()
    {
        T Ans=0;
        Ans=no1*no2;
        return Ans;
    }
template <class T>
T Arithmetic<T>:: Division()
    {
        T Ans=0;
        Ans=no1/no2;
        return Ans;
    }
int main()
{
    // Arithmetic<int> obj1(11,10);
    Arithmetic<float> obj1(11.95756 ,10.954);
    float iret=0;

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