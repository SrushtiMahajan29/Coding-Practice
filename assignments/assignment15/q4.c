//Accept number of elements, range,elements and display elements from that range

#include<stdio.h>
#include<stdlib.h>

void display(int Arr[],int iLength,int n1,int n2)
{
    printf("Elements in given range of %d to %d are : \n",n1,n2);

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]>=n1 && Arr[i]<=n2)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iCnt=0,iRet=0,iValue1=0,iValue2=0,iSize=0;
    int *p=NULL;
    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));
    
    if(p==NULL)
    {
        printf("Unable to allocate the memory ");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter 1st element of range and last element of range : \n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);

    display(p,iSize,iValue1,iValue2);

    free(p);
    return 0;
}