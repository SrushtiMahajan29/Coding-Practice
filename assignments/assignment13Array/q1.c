//difference between summation of even numbers and summation of odd numbers

// #include<stdio.h>

// int diff(int no[])
// {
//     int idigit=0;
//     int ieven=0,iodd=0;
//     while(no[i]!='/0')
//     {

//         if(no[i]%2==0)
//         {
//             // printf("%d",ieven );
//             ieven++;
//         }
//         else
//         {
//             iodd++;
//         }
//         no=no/10;
//     }
//     printf("%d\n",ieven);
//     printf("%d\n",iodd);
//     return ieven-iodd;

// }

// int main()
// {
//     int num=0,iret=0;
//     printf("Enter the number of elements : ");
//     scanf("%d",&num);
//     int A[num];
//     printf("Enter numbers : \n");
//     for(int i=0;i<num;i++){
//         scanf("%d",&A[i]);
//     }
    
//     iret=diff(A);
//     printf("Differernce between even and odd digits in %d is : %d",num,iret);
//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int i=0,iEven=0,iOdd=0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iEven=iEven+Arr[i];
        }
        else
        {
            iOdd=iOdd+Arr[i];
        }    
    }
    printf("%d",iEven);
    printf("%d",iOdd);

    if(iEven>iOdd)
    {
         return(iEven-iOdd);    
    }
    else
    {
        return(iOdd-iEven);
    }
}

int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element : %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Difference(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}