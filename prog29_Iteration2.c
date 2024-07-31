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


#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
    // int iNo=5;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Ganesh %d tqqah time\n",iCnt);
    }
    
}

int main()
{
    int iValue=0;
    printf("Enter number of time you want to display Jay Ganesh on screen");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}