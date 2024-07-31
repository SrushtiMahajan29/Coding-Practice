//Display difference between factors and non factors of a number
#include<stdio.h>

int diff(int num)
{
    int fact=0;
    int nonFact=0;
    int diff=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            fact=fact+i;
        }
        else{
            nonFact=nonFact+i;
        }
    }
    // printf("%d and %d",fact,nonFact);
    diff=fact-nonFact;
    
    return diff;
}

int main()
{
    int iNo=0;
    int iret=0;
    printf("Enter number ");
    scanf("%d",&iNo);
    iret=diff(iNo);
    printf("Difference between factors and non factors of %d is %d",iNo,iret);
    return 0;
}