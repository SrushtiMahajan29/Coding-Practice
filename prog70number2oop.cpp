//Accept a number from user and calculate its factorial using class and object

#include<iostream>
using namespace std;

class Number{
    private :
        int iNo;

    public: 

        Number(int x)
        {
            iNo=x;
        }

        int fact()
        {
            int iFact=1;
            for(int i=1;i<=iNo;i++)
            {
                iFact=iFact*i;
            }
            return iFact;
        }
};



int main()
{
    int num=0;
    int iret=0;
    cout<<"Enter a number: ";
    cin>>num;

    // Number nobj(num);
    // iret=nobj.fact();
    
    Number *nobj=new Number(num);
    iret=nobj -> fact();

    cout<<"Factorial of "<<num<<" is "<<iret<<endl;
    delete(nobj);

    return 0;
}