//Display digits in a number
#include<stdio.h>

void Display(int iNo)
{
    int iDigit=0;
    printf("------------------------------------------------\n");
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("Value of digit is %d\n",iDigit);      //1
        iNo=iNo/10;                 //72
        printf("Value of iNo is %d\n",iNo);
        printf("------------------------------------------------\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}