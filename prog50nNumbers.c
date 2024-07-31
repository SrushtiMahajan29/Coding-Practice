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
float Average(int *Arr,int iSize)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    printf("\n");
    return (float)iSum/(float)iSize;
}


int main()
{

    int iCount=0,iCnt=0;
    float fret=0.0f;
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
 
    fret=Average(ptr,iCount);

    printf("Average ofnumbers is: %f\n\n",fret);

    printf("Dynamiic memory deallocated successfully\n");
    free(ptr);

    return 0;
}