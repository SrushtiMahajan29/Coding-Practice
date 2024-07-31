//Accept N numbers and return frequency of even numbers
#include<stdio.h>
#include<stdlib.h>

int EvenFrequency(int Arr[],int iLength)
{
    int iEven=0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iEven++;
        }
    }
    return iEven;
}

int main()
{
    int iRet=0,iCnt=0,iSize=0;
    printf("Enter number of elements :");
    scanf("%d",&iSize);

    int *p=NULL;
    p=(int* )malloc(iSize*sizeof(int));

    printf("Enter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter %d element",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=EvenFrequency(p,iSize);
    printf("Number of even numbers are : %d",iRet);
    free(p);
    return 0;
}
