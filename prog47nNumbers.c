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
void DisplayEven(int *Arr,int iSize)
{
    int iCnt=0;

    printf("\nEven elements of array are: \n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        printf("%d \t",Arr[iCnt]);
        // printf("%d \t",*Arr);
        // Arr++;
    }
    printf("\n");
}
void DisplayOdd(int *Arr,int iSize)
{
    int iCnt=0;

    printf("\nEven elements of array are: \n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        printf("%d \t",Arr[iCnt]);
        // printf("%d \t",*Arr);
        // Arr++;
    }
    printf("\n");
}

int main()
{

    int iCount=0,iCnt=0;

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

    DisplayEven(ptr,iCount);
    DisplayOdd(ptr,iCount);
    printf("Dynamiic memory deallocated successfully\n");
    free(ptr);

    return 0;
}