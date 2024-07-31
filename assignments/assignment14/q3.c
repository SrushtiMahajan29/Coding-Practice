//3. Accept N numbers and check whether it contains 11 or not?
/*#include<stdio.h>
#include<stdlib.h>

void Check(int Arr[],int iLength)
{
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
            printf("11 is present ");
            return;
        }
    }
    printf("11 is absent");
    
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
    Check(p,iSize);
   
    free(p);
    return 0;
}*/

//4. Accept N numbers and return frequency of 11
#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[],int iLength)
{
    int count=0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
            count++;
        }
    }
    return count;
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
    iRet=Check(p,iSize);
   printf("Frequency of 11 is %d",iRet);
    free(p);
    return 0;
}
