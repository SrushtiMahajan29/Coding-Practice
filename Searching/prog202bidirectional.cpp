#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
     
     bool BidirectionalSearch(int iNo)
     {
        int iStart=0;
        int iEnd=iSize-1;
        bool flag=false;

        while(iStart<=iEnd)
        {
            if((Arr[iStart]==iNo)|| (Arr[iEnd]==iNo))
            {
                flag=true;
                break;
            }
            iStart++;
            iEnd--;
        }
        return flag;
     }

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iValue=0;
    bool bret=false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout<<"Enter element you want to search";
    cin>>iValue;

    bret=aobj->BidirectionalSearch(iValue);

    if(bret==true)
    {
        cout<<"Element present";
    }
    else
    {
        cout<<"Not present";
    }

    delete aobj;

    return 0;
}