// // Accept n numbers and another no and return index of first occurence of no

// #include<stdio.h>
// #include<stdlib.h>

// int FistOccurance(int Arr[],int iLength,int iNo)
// {
//     for(int i=0;i<iLength;i++)
//     {
//         if(Arr[i]==iNo)
//         {
//             return i+1;   
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int iSize=0,iRet=0,iCnt=0,iValue=0;
//     int *p=NULL;

//     printf("Enter number of elements ");
//     scanf("%d",&iSize);

//     p=(int*)malloc(iSize*sizeof(int));

//     if(p==NULL)
//     {
//         printf("Unable to allocate the memory ");
//         return -1;
//     }
//     printf("Enter %d elements \n",iSize);
//     for(iCnt=0;iCnt<iSize;iCnt++)
//     {
//         printf("Enter elements : %d",iCnt+1);
//         scanf("%d",&p[iCnt]);
//     }
//     printf("Enter the number ");
//     scanf("%d",&iValue);

//         iRet=FistOccurance(p,iSize,iValue);
//     if(iRet>0)
//     {
//         printf("Number is present at %d",iRet);
//     }
//     else
//     {
//         printf("Number is not present");
//     }
//     free(p);
//     return 0;
// }

// Accept n numbers and another no and return index of last occurence of no

#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[],int iLength,int iNo)
{
    for(int i=iLength;i>0;i--)
    {
        if(Arr[i]==iNo)
        {
            return i+1;   
        }
    }
    return -1;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
    int *p=NULL;

    printf("Enter number of elements ");
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
        printf("Enter elements : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("Enter the number ");
    scanf("%d",&iValue);

        iRet=LastOccurance(p,iSize,iValue);
    if(iRet>0)
    {
        printf("Number is present at %d",iRet);
    }
    else
    {
        printf("Number is not present");
    }
    free(p);
    return 0;
}