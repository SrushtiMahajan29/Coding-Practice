// Problem Statement : Accept n numberrs from user and dispaly sum

// //////////////////////////////////
//Function header
///////////////////////////////////////
//fun name: 
//Description: 
//Input :-
//output:-
//author: Srushti Satish Mahajan
//Date  :29/10/2023
///////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>
// void Display(int *Arr,int iSize)
int sum(int *Arr,int iSize)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    printf("\n");
    return iSum;
}
int sumEven(int *Arr,int iSize)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        iSum=iSum+Arr[iCnt];
    }
    printf("\n");
    return iSum;
}
int sumOdd(int *Arr,int iSize)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        iSum=iSum+Arr[iCnt];
    }
    printf("\n");
    return iSum;
}

int main()
{

    int iCount=0,iCnt=0,iret=0,iret1=0,iret2=0;

    int*ptr=NULL;

    printf("\nEnter number of elements you want to enter: \n");
    scanf("%d",&iCount);

    ptr =(int*)malloc(iCount*sizeof(int));

    printf("\nDynamic memory allocted successfully for %d elements\n",iCount);

    printf("Enter the %d elements \n \n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter the %d element : \n",iCnt);

        scanf("%d",&ptr[iCnt]);
    }

    iret=sum(ptr,iCount);

    printf("Sum of numbers is: %d\n\n",iret);

    iret1=sumEven(ptr,iCount);

    printf("Sum of even numbers is: %d\n\n",iret1);
    
    iret2=sumOdd(ptr,iCount);

    printf("Sum of odd numbers is: %d\n\n",iret2);

    printf("Dynamiic memory deallocated successfully\n");
    free(ptr);

    return 0;
}