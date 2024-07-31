// Problem Statement : Check whether inputted number is perfrct number or not
// Perfect number : Number whose Sum of its positive factors excluding the number itself
// //////////////////////////////////
//Function header
///////////////////////////////////////
//fun name: Perfect
//Description: Write all factors of given number
//Input :- int 
//output:- 
//author: Srushti Satish Mahajan
//Date  :9/10/2023
///////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool perfectNumber(int ino)
{
    int iSum=0;
    if(ino <0)                                                      //UPDATER
    {
        ino=-ino;
    }
    for(int iCnt=1;iCnt<=ino/2;iCnt++)
    {
    if(ino % iCnt==0)
        iSum=iSum+iCnt;
    }
    if(iSum==ino)
    {
        return true;
    }
    else{
        return false;
    }

}


int main()
{
    int inum=0;
    bool bRet=false;
    printf("Enter Number");
    scanf("%d",&inum);
    bRet=perfectNumber(inum);
    if(bRet==true)
    {
        printf("%d is a perfect number",inum);
    }
    else{
        printf("%d is not a perfect number",inum);
    }
    return 0;
}

//TIme complexity = n/2