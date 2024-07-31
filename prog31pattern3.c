// Problem Statement :  display string 5 times

// //////////////////////////////////
//Function header
///////////////////////////////////////
//fun name: display
//Description: display string 5 times
//Input :-
//output:-
//author: Srushti Satish Mahajan
//Date  :9/10/2023
///////////////////////////////////////

//Loop gives repeatating statements
#include<stdio.h>

void display(int iNo)
{
     int iCnt=0;

    for(iCnt=iNo;iCnt>=0;iCnt--)
    {
        // printf("*\t");
        printf("*\n");
    }
}

int main()
{
    int iValue=0;
    printf("Enter number of times you want to display * onto the screen");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}