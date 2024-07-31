//Accept number from user and check whether its even or not

//Function name: CheckEvenOdd
// Description: Have input from user check whether it is even or not and display 
//input : int
//output: string
//Autor : Srushti Satish Mahajan
//Date  : 2/10/2023
//

//Start
// take input from user
// divide by 0
// if remainder is 0 number is even
// or its odd
// Stop

#include <stdio.h>
#include<stdbool.h>

bool CheckEven(int iValue)
{
    if(iValue%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bRet=false;

    printf("Enter number");
    scanf("%d",&iNo);
    bRet=CheckEven(iNo);

    if(bRet==1)
    {
        printf("%d is even number",iNo);
    }
    else{
        printf("%d is even number",iNo);       
    }

    return 0;
}

//Check whether:::: return value bool