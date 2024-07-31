#include<stdio.h>

void descFact(int num)
{
    int j=0,desc[5];
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            desc[j]=i;
            j++;
        }
    }
    j=j-1;
    // for(int i=j;i>=0;i--)
    // {
    //     printf("%d ",desc[j]);
    // }
    for(int i=0;i<j;i++)
    {
        printf("%d ",desc[j]);
    }
}

int main()
{
    int iNo=0;
    printf("Enter number ");
    scanf("%d",&iNo);
    descFact(iNo);
    return 0;
}