//Count number of digits in accepted number

#include<stdio.h>
 
int Display(int iNo)
{
    int iCnt=0;
    while(iNo!=0)
    {
        // iDigit=iNo%10; Not needed for counting the digits
        iNo=iNo/10;                
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iret=0;
    printf("Enter number");
    scanf("%d",&iValue);

    iret=Display(iValue);

    printf("Number of digits are %d ",iret);
    return 0;
}