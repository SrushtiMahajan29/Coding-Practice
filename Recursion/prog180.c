//Function dispalying factors of a number

#include<stdio.h>

void FactorsR(int no)
{
    static int iCnt = 1;//static storage class-memory preserved across functions

    if(iCnt <= (no/2))
    {
        if(no % iCnt==0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(no);
    }
}


int main()
{
    int ino=0;
    printf("Enter number to find factors: ");
    scanf("%d",&ino);
    FactorsR(ino);

    return 0;
}