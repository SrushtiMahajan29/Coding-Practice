#include<stdio.h>

void nonFact(int iNum)
{
    for(int i=1;i<iNum;i++)
    {
        if(iNum%i!=0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int no;
    printf("Enter number ");
    scanf("%d",&no);
    nonFact(no);
    return 0;
}