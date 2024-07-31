//Accept array of number from user and calculate its sum of even numbers

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
        int AdditionEven()
        {
            int iSum=0,iCnt=0;

            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                if((Arr[iCnt]%2)==0)
                {
                    iSum+=Arr[iCnt];
                }
            }
            return iSum;
        }
};



int main()
{
    int iLength=0,iret=0;
    cout<<"Enter number of elemnts : ";
    cin>>iLength;

    // Array aobj(iLength);

    Array *aobj=new Array(iLength);

    aobj->Accept();
    aobj->Display();

    iret=aobj->AdditionEven();
    cout<<"\nAddition of even elements are: "<<iret;

    return 0;
}