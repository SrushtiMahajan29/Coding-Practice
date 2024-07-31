// Problem Statement : Accept n numberrs from user and dispaly maximum

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

int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;

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
 
    iret=Maximum(ptr,iCount);

    printf("Maximum of numbers is: %d\n\n",iret);

    printf("Dynamiic memory deallocated successfully\n");
    free(ptr);

    return 0;
}