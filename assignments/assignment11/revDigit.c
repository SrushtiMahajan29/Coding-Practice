//Accept a number from user and display its digits in reverse order

#include<stdio.h>

void revDigit(int num)
{
    if(num<0)
    {
        num=-num;
    }
    int iDigit=0;
    while(num!=0)
    {
        iDigit=num%10;  
        num=num/10; 
        printf("%d\n",iDigit);
    }
}

int main()
{
    int iNo=0;
    printf("Enter a number : ");
    scanf("%d",&iNo);
    revDigit(iNo);
    return 0;
}