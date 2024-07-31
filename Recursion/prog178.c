//Dispalay 1 to 5

#include<stdio.h>


void DisplayI()
{
    int iCnt = 1;//auto storage class-memory not preserved across functions

    while(iCnt <= 5)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}
void DisplayR()
{
    static int iCnt = 1;//static storage class-memory preserved across functions

    if(iCnt <= 5)
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR();
    }
}


int main()
{
    DisplayR();

    return 0;
}