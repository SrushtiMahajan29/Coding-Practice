//Reverse a number 

#include<stdio.h>

int rev(int num)
{
    int iDigit=0;
    int Reverse=0;
    while(num!=0)
    {
        iDigit=num%10;
        num=num/10;
        Reverse=(Reverse*10)+iDigit;

    }
    return Reverse;
}

int main()
{
    int iNo=0;
    int iret=0;

    printf("Enter a number");
    scanf("%d",&iNo);
    iret=rev(iNo);
    printf("Reverse of number %d is %d",iNo,iret);
}