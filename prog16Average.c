#include<stdio.h>

float Average(int iNo1,int iNo2, int iNo3)
{
    float fAvg=0.0f;
    fAvg=(float)(iNo1+iNo2+iNo3)/3;
    return fAvg;
} 

int main()
{
    int inum1=0;
    int inum2=0;
    int inum3=0;
    float fRet=0;

    printf("Enter 1st number ");
    scanf("%d",&inum1);
    printf("Enter 2nd number ");
    scanf("%d",&inum2);
    printf("Enter 3rd number ");
    scanf("%d",&inum3);

    fRet=Average(inum1,inum2,inum3);
    printf("Average of 3 numbers is %f ",fRet);

}