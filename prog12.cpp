// #include<iostream>
// using namespace std;
// class Calculate{
//     public:
//     float CalculatePer(int iMarks, int iTotal )
//     {
//         float fAns=0;
//         // fAns=((float )iMarks/( float) iTotal)*100;
//         return fAns;
//     }   
// };

// int main()
// {
//      int iValue1=0;
//      int iValue2=0;
//      float fRet=0.0;

//     cout<<"Enter marks of student got\n";
//     cin>>iValue1;
    
//     cout<<"Enter Total marks \n";
//     cin>>iValue2;
//     Calculate obj;
//     fRet=obj.CalculatePer(iValue1,iValue2);

//     cout<<"Your Percentage are: "<<fRet;
//     return 0;
// }



#include<iostream>
using namespace std;

class Calculate {
public:
    float CalculatePer(int iMarks, int iTotal) {
        float fAns = ((float)iMarks / (float)iTotal) * 100;
        return fAns;
    }
};

int main() {
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    cout << "Enter marks of student got: ";
    cin >> iValue1;

    cout << "Enter Total marks: ";
    cin >> iValue2;

    Calculate obj;
    fRet = obj.CalculatePer(iValue1, iValue2);

    cout << "Your Percentage is: " << fRet << "%" << endl;
    return 0;
}
