#include<stdio.h>

int sumNon(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i!=0)
        {
            sum=sum+i;
        }
    }
    return sum;
}

int main()
{
    int iNo=0;
    int iret=0;
    printf("Enter number ");
    scanf("%d",&iNo);
    iret=sumNon(iNo);
    printf("Summation of non factors is %d",iret);
    return 0;
}