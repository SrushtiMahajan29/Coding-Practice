//Accept two values obtained marks and total marks & Calculate Percentage from given marks
#include<stdio.h>

float CalculatePer(int iMarks, int iTotal )
{
    auto float fAns=0;
    fAns=(((float)iMarks/(float)iTotal)*100);
    return fAns;
}
int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto float fRet=0;

    printf("Enter marks of student got\n");
    scanf("%d",&iValue1);
    
    printf("Enter Total marks \n");
    scanf("%d",&iValue2);

    fRet=CalculatePer(iValue1,iValue2);

    printf("Your Percentage are: %f",fRet);
    return 0;
}