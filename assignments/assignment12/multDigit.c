#include<stdio.h>

int CountMult(int num)
{
    int iDigit=0,iMult=1;
    while(num!=0)
    {
    iDigit=num%10;
    iMult=iMult*iDigit;
    num=num/10;
    }
    return iMult;
}

int main()
{
    int num=0;
    int iret=0;

    printf("enter number you want");
    scanf("%d",&num);
    iret=CountMult(num);
    printf("Multiplication of all digits in %d is : %d",num,iret);
    return 0;
}