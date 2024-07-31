//Problem statement: Accept one number from user and return its cube

//Function name: CalculateCube
// Description: Have input from user calculate its cube and display it
//input : int
//output: int
//Autor : Srushti Satish Mahajan
//Date  : 2/10/2023


#include<stdio.h>
long int CalculateCube(int iValue)
{
    long int iAns=0;
    
    iAns=iValue*iValue*iValue;
    return iAns;
}
int main()
{
    int iNumber=0;
    long int iCube=0;//8 byte
    // long iCube=0;

    printf("Enter number here : \n");
    scanf("%d",&iNumber);

    iCube=CalculateCube(iNumber);
    printf("Cube of number is %ld",iCube);
    return 0;
}