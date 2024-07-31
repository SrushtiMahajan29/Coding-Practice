//Accept two num and display smallest one

#include<stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 <= iNo2){
        return iNo1;
    }
    else{
        return iNo2;
    }
}

int main()
{
    int iNum1=0;
    int iNum2=0;
    int iRet=0;

    printf("Enter 1st number\n");
    scanf("%d",&iNum1);

    printf("Enter 2nd number\n");
    scanf("%d",&iNum2);

    iRet=Minimum(iNum1,iNum2);

    printf("Smallest among %d and %d is %d",iNum1,iNum2,iRet);

    return 0;
}