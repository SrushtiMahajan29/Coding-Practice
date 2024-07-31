// Problem Statement : Write all factors of given number
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
#include<stdbool.h>

void displayFactor(int ino)
{
    for(int iCnt=1;iCnt<ino;iCnt++)
    {
    if(ino % iCnt==0)
        printf("%d\t",iCnt);
    }
}


int main()
{
    int inum=0;
    bool bRet=false;
    printf("Enter first number");
    scanf("%d",&inum);
    printf("Factors of %d are : ",inum);
    displayFactor(inum);

    return 0;
}

//TIme complexity = n