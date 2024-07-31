//Function dispalying factorial of a number

#include<stdio.h>

int factorialI(int no)
{
    int iCnt=1;
    int fact=1;
    
    while(iCnt<=no)
    {
        fact=fact*iCnt;
        iCnt++;
    }
    return fact;
}
int factorialR(int no)
{
    static int fact=1;
    static int iCnt=1;

    if(iCnt<=no)
    {
        fact=fact*iCnt;
        iCnt++;
        factorialR(no);
    }
    return fact;
}


int main()
{
    int iValue = 0,fact=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    fact=factorialR(iValue);
    printf("factorial of digits : %d",fact);
    return 0;
}