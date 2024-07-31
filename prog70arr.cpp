//Accept a number from user and calculate its factorial using class and object

#include<iostream>
using namespace std;

class Array
{
    private :
        int *Arr;
        int iSize;

    public: 
        Array(int x)
        {
            iSize=x;
            Arr=new int[iSize];
        }
        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt=0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            int iCnt=0;
            cout<<"Elements of array : "<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }
};



int main()
{
    int iLength=0;
    cout<<"Enter number of elemnts : ";
    cin>>iLength;

    // Array aobj(iLength);

    Array *aobj=new Array(iLength);

    aobj->Accept();
    aobj->Display();
    return 0;
}