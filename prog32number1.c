// Problem Statement : Check whether given number is factor or not

// //////////////////////////////////
//Function header
///////////////////////////////////////
//fun name: checkFactor
//Description: Check whether given number is factor or not
//Input :- int , int
//output:- True or False
//author: Srushti Satish Mahajan
//Date  :9/10/2023
///////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

bool checkFactor(int ino1,int ino2)
{
    if(ino1%ino2==0)
        return true;
    else
        return false;
}


int main()
{
    int inum1=0,inum2=0;
    bool bRet=false;
    printf("Enter first number");
    scanf("%d",&inum1);
    
    printf("Enter second number");
    scanf("%d",&inum2);

    bRet=checkFactor(inum1,inum2);

    if(bRet==true)
    {
        printf("%d is a factor of %d",inum2,inum1);
    }
    else{
        printf("%d is not a factor of %d",inum2,inum1);
    }
    return 0;
}