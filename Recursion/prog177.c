//Dispalay * 5 times on screen

#include<stdio.h>


void DisplayI()
{
    int iCnt = 1;//auto storage class-memory not preserved across functions

    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }
}
void DisplayR()
{
    static int iCnt = 1;//static storage class-memory preserved across functions

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}


int main()
{
    DisplayR();

    return 0;
}