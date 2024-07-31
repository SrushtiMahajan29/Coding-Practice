//Accept a number from user and display even factors of that number

#include<stdio.h>

void evenFact(int iVal)
{
    if(iVal<0)
    {
        iVal=-iVal;
    }

    // for(int i=2;i<=iVal/2;i=i+2)
    // {
    //     if(iVal%i==0)
    //     {
    //         printf("%d  ",i);
    //     }
        
    // }
    for(int i=2;i<=iVal/2;i++)
    {
        if(iVal%i==0 && i%2==0)
        {
            printf("%d  ",i);
        }
        
    }
}

int main()
{
    int iNo=0;
    printf("Enter number ");
    scanf("%d",&iNo);
    evenFact(iNo);
    return 0;
}