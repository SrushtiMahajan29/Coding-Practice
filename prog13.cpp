#include<iostream>
using namespace std;

void displayPercentage(float fValue)
{
     if(fValue>=0.0 && fValue<=35.00)
    {
        cout<<"You are failed";
    }
    else if(fValue>=35.00 && fValue<=49.00)
    {
        cout<<"You are passed";
    }
    else if(fValue>=49.00 && fValue<=59.00)
    {
        cout<<"You got 2nd class";
    }
    else if(fValue>=59.00 && fValue<=74.00)
    {
        cout<<"You got 1st class";
    }
    else
    {
        cout<<"You got 1st class with distinction";
    }
}

int main()
{
    float Percentage=0.0;
    cout<<"Enter your percentage";
    cin>>Percentage;

    displayPercentage(Percentage);
    
    return 0;
}