// Problem Statement : Accept n numberrs from user and check whether those are even or not and dispaly if even

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
int countEven(int *Arr,int iSize)
{
    int iCnt=0,flag=0;;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
            flag++;
    }
    printf("\n");
    return flag;
}
int countOdd(int *Arr,int iSize)
{
    int iCnt=0,flag=0;;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
            flag++;
    }
    printf("\n");
    return flag;
}

int main()
{

    int iCount=0,iCnt=0,iret1=0,iret2=0;

    int*ptr=NULL;

    printf("\nEnter number of elements you want to enter: \n");
    scanf("%d",&iCount);

    ptr =(int*)malloc(iCount*sizeof(int));

    printf("\nDynamic memory allocted successfully for %d elements\n",iCount);

    printf("Enter the %d elements : \n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("Enter the %d element : \n",iCnt);

        scanf("%d",&ptr[iCnt]);
    }

    iret1=countEven(ptr,iCount);
    iret2=countOdd(ptr,iCount);

    printf("Count of even numbers is: %d\n\n",iret1);
    printf("Count of odd numbers is: %d\n\n",iret2);
    printf("Dynamiic memory deallocated successfully\n");
    free(ptr);

    return 0;
}