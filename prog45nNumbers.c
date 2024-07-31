// Problem Statement :  Problems on n numbers

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


#include<stdio.h>           //printf and scanf
#include<stdlib.h>          //for malloc and free

int main()
{
    int iCount=0;
    int *ptr=NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount*sizeof(int));///Malloc return address so ptr., return type is void* so typecasting(Eid topi) using int*

    printf("Enter the numbers:  \n");

    for(int i=0;i<iCount;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Your Entered numbers are:  \n");
    for(int i=0;i<iCount;i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}