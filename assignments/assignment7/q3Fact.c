#include<stdio.h>
int Fact(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
        printf("Factorial of aa number is %d\n",fact);
    }
    return fact;
}

int main()
{
    int iNum=0;
    int iret=0;
    printf("Enter a number : ");
    scanf("%d",&iNum);
    iret=Fact(iNum);
    printf("Factorial of aa number is %d",iret);
    return 0;
}