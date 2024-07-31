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
     
     bool binarySearch(int iNo)
     {
        bool flag=false;
        int iStart=0;
        int iEnd=iSize-1;
        int iMid=0;

        while(iStart<=iEnd)
        {
            iMid=iStart + (iStart+iEnd)/2;

            if(Arr[iMid]==iNo)
            {
                flag=true;
                break;
            }
            else if (Arr[iMid]<iNo)
            {
                iStart=iMid+1;
            }
            else if(Arr[iMid]>iNo)
            {
                iEnd=iMid-1;
            }
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

    bret=aobj->binarySearch(iValue);

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