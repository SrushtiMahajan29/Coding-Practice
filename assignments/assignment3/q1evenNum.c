//Accept one number and print that number of even numbers on screen
//New : C,c++ can't return array but java can
#include<stdio.h>

void display(int iVal)
{
    int even=2;
    if(iVal<=0)
    {
        printf("No even numbers");
        return ;
    }
    printf("first %d even numbers are: ",iVal);
    for(int i=0;i<iVal;i++)
    {
        printf("%d ",even);
        even=even+2;
    }
}

int main()
{
    int iNo=0;
    printf("Enter number of even numbers you want : ");
    scanf("%d",&iNo);
    display(iNo);
    
    return 0;
}