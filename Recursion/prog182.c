//Function dispalying digits in a number

#include<stdio.h>

void digitsI(int no)
{
    int digit=0;

    while(no!=0)
    {
        digit=no%10;
        printf("%d\n",digit);
        no=no/10;
    }
}
void digitsR(int no)
{
    int digit=0;

    if(no!=0)
    {
        digit=no%10;
        printf("%d\n",digit);
        no=no/10;
        digitsR(no);
    }
}


int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    digitsR(iValue);
    return 0;
}