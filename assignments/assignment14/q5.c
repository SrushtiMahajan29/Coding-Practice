//Accept n numbers and another NO and check if No is in numbers or not

#include<stdio.h>
#include<stdlib.h>

void Check(int Arr[],int iLength,int no)
{
    int count=0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==no)
        {
            printf("%d is present in numbers",Arr[i]);
            return;
        }
    }
}

int main()
{
    int iRet=0,iCnt=0,iSize=0,no=0;
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
    printf("Enter number to find : ");
    scanf("%d",&no);
    Check(p,iSize,no);

    free(p);
    return 0;
}
