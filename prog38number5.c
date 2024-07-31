// Problem Statement : Check whether inputted number is prime number or not with good programming practice
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

bool checkPrime(int iVal)
{

    if(iVal<0)
    {
        iVal=-iVal;
    }

    bool bFlag=true;

    for(int iCnt=2;iCnt<=iVal/2; iCnt++)
        {
            if(iVal%iCnt ==0)
            {
                bFlag=false;
                break;
            }
        }
    return bFlag;

}

int main()
{
    int ino=0;
    bool bRet=false;
    printf("Enter the number : ");
    scanf("%d",&ino);
    bRet=checkPrime(ino);
    if(bRet==true)
    {
        printf("%d is a prime number",ino);
    }
    else
    {
        printf("%d is not a prime number",ino);
    }
    return 0;
}