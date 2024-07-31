//Accept N numbers and return difference between frequency of even numbers and odd numbers
#include<stdio.h>
#include<stdlib.h>

int DiffFrequency(int Arr[],int iLength)
{
    int iEven=0,iOdd=0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iEven++;
        }
        else{
            iOdd++;
        }
    }
    if(iEven>iOdd)
    {
        return iEven-iOdd;
    }
    else
    {
        return iOdd-iEven;
    }
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
    iRet=DiffFrequency(p,iSize);
    printf("Diff between freq of even and odd numbers are : %d",iRet);
    free(p);
    return 0;
}
