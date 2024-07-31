//Accept n numbers and display summation of digits in  number
#include<stdio.h>
#include<stdlib.h>

void sum(int Arr[],int iLength)
{
    printf("Summation of digits in elements : \n");
    for(int i=0;i<iLength;i++)
    {
        int sum=0;
        int digit=0;
        int no=Arr[i];
        while(no!=0)
        {
            digit=no%10;
            no=no/10;
            sum=sum+digit;
        }
        printf("Sum of digits in %d is %d\n",Arr[i],sum);
    }
}

int main()
{
    int iSize=0,iret=0;
    int *p=NULL;
    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p=(int*)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements : ",iSize);
    for(int i=0;i<iSize;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&p[i]);
    }
    sum(p,iSize);
    return 0;
}