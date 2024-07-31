//Function dispalying sum of digits in a number

#include<stdio.h>

int sumDigitsI(int no)
{
    int digit=0;
    int sum=0;
    while(no!=0)
    {
        digit=no%10;
        no=no/10;
        sum+=digit;
    }
    return sum;
}
int sumDigitsR(int no)
{
    int digit=0;
    static int sum=0;
    if(no!=0)
    {
        digit=no%10;
        no=no/10;
        sum+=digit;
        sumDigitsR(no);
    }
    return sum;
}


int main()
{
    int iValue = 0,sum=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    sum=sumDigitsR(iValue);
    printf("Sum of digits : %d",sum);
    return 0;
}