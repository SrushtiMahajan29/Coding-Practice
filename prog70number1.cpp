//CAlculate a number from user and calculate its factorial

#include<iostream>
using namespace std;

int fact(int no)
{
    int iFact=1;
    for(int i=1;i<=no;i++)
    {
        iFact=iFact*i;
    }
    return iFact;
}

int main()
{
    int num=0;
    int iret=0;
    cout<<"Enter a number: ";
    cin>>num;
    iret=fact(num);
    cout<<"Factorial of "<<num<<"is "<<iret<<endl;
    return 0;
}