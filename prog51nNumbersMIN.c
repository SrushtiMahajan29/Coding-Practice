// Problem Statement : Accept n numberrs from user and dispaly minimum

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

int Minimum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;

}

int main()
{

    int iCount=0,iCnt=0,iret=0;
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
 
    iret=Minimum(ptr,iCount);

    printf("Miniimum of numbers is: %d\n\n",iret);

    printf("Dynamiic memory deallocated successfully\n");
    free(ptr);

    return 0;
}