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

void display()
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("Jay Ganesh %d ith time\n",iCnt);
    }
    
}

int main()
{
    display();
    return 0;
}