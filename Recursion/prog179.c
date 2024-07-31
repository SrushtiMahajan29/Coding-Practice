//Function dispalying numbers from 1 upto given number

#include<stdio.h>


void DisplayI(int no)
{
    int iCnt = 1;//auto storage class-memory not preserved across functions

    while(iCnt <= no)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
void DisplayR(int no)
{
    static int iCnt = 1;//static storage class-memory preserved across functions

    if(iCnt <= no)
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR(no);
    }
}


int main()
{
    DisplayR(4);

    return 0;
}