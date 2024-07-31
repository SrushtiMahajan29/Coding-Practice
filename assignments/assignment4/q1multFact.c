#include<stdio.h>

int multFact(int inum)
{
    int mult=1;
    printf("multi is %d ",mult);
    for(int i=1;i<=inum/2;i++)
    {
        if(inum%i==0)
        {
            mult=mult*i;
            
        }
    }
    return mult;
}

int main()
{
    int iNo=0;
    int iret=0;

    printf("Enter number ");
    scanf("%d",&iNo);

    iret=multFact(iNo);
    printf("Multiplication of factors of %d is %d",iNo,iret);

    return 0;
}