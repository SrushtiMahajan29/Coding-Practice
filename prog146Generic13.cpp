//Aceept n numbers from usser and perform adition of numbers

#include<iostream>
using namespace std;

class Array{
    public:

        int *Arr;
        int len;

        Array(int length)
        {
            len=length;
            Arr=new int[len];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements : ";
            int iCnt=0;

            for(iCnt=0;iCnt<len;iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }

        int Display()
        {
            cout<<"Elements of Array : ";
            for(int iCnt=0;iCnt<len;iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }
};

int main()
{
   Array obj(5);
   obj.Accept();
   obj.Display();

    return 0;
}