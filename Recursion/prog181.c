//Function dispalying factors of a number

#include<stdio.h>

int sumFactorsR(int no)
{
    static int iCnt = 1;//static storage class-memory preserved across functions
    static int isum=0;
    if(iCnt <= (no/2))
    {
        if(no % iCnt==0)
        {
            isum+=iCnt;
        }
        iCnt++;
        sumFactorsR(no);
    }
    return isum;
}


int main()
{
    int ino=0,sum=0;
    printf("Enter number to find factors: ");
    scanf("%d",&ino);
    sum=sumFactorsR(ino);
    printf("Sum of factors %d",sum);
    return 0;
}