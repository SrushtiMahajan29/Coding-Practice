//Accept n numbers from user and return the largest and smallest one

#include<stdio.h>
#include<stdlib.h>

int largest(int Arr[],int iLength)
{
    int large=0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]>large)
        {
            large=Arr[i];
        }
    }
    return large;
}
int smallest(int Arr[],int iLength)
{
    int small=Arr[0];
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]<small)
        {
            small=Arr[i];
        }
    }
    return small;
}

int main()
{
    int iret1=0,iret2=0,iSize=0;
    int *p;
    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p=(int *)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("Memeory can't be allocated");
        return -1;
    }
    else
    {
        for(int i=0;i<iSize;i++)
        {
            printf("Enter %d element: ",i+1);
            scanf("%d",&p[i]);
        }
        
        iret1=largest(p,iSize);
        printf("Largest element is %d\n",iret1);
        
        iret2=smallest(p,iSize);
        printf("Smallest element is %d\n",iret2);

        printf("Difference between largest and smallest elements of array is : %d\n",iret1-iret2);
    }
    return 0;
}