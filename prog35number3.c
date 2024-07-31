// Problem Statement : Return addition factors of given number
// //////////////////////////////////
//Function header
///////////////////////////////////////
//fun name: Factor
//Description: Write all factors of given number
//Input :- int 
//output:- 
//author: Srushti Satish Mahajan
//Date  :9/10/2023
///////////////////////////////////////


#include<stdio.h>

int sumFactor(int ino)
{
    int iSum=0;
    for(int iCnt=1;iCnt<=ino/2;iCnt++)
    {
    if(ino % iCnt==0)
        iSum=iSum+iCnt;
    }
    return iSum;
}


int main()
{
    int inum=0;
    int bRet=0;
    printf("Enter first number");
    scanf("%d",&inum);
    printf("Sum of Factors of %d is : ",inum);
    bRet=sumFactor(inum);
    printf("%d",bRet);
    return 0;
}

//TIme complexity = n/2