#include<stdio.h>


void DisplayI()
{
    int iCnt = 1;//auto storage class-memory not preserved across functions

    while(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}
void DisplayR()
{
    int iCnt = 1;//static storage class-memory preserved across functions

    if(iCnt <= 4)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
        DisplayR();
    }
}


int main()
{
    DisplayR();

    return 0;
}