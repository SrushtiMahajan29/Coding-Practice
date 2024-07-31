//4.Accept N numbers Dispaly 3 and 5 divisible numbers
/*
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    for(int i=0;i<iLength;i++)
    {
       if(Arr[i]%3==0 && Arr[i]%5==0)
       {
        printf("%d\n",Arr[i]);
       } 
    }
}

int main()
{
    int iRet=0,iCnt=0,iSize=0;
    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    int *p=NULL;
    p=(int *)malloc(iSize*sizeof(int));
    printf("Enter %d Elements",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter %d element",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}
*/
//5. Accept N numbers Dispaly numbers divisible by 11


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%11==0)
        {
            printf("%d\n",Arr[i]);
        }
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
    Display(p,iSize);
    free(p);
    return 0;
}
