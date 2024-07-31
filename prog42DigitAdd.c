//Accept number from user and display sum of its digits
//ip:7521
//op:15

#include<stdio.h>

int SumDigit(int iNo)
{
    int iDigit=0,iSum=0;
    while(iNo!=0)
    {
        // iDigit=iNo%10;
        // iSum=iSum+iDigit;

        iSum=iSum+(iNo%10);

        iNo=iNo/10;
    }
    return iSum;
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d" ,&iValue);
    iRet=SumDigit(iValue);
    printf("Sum of digits in number %d is %d ",iValue,iRet);
    return 0;
}