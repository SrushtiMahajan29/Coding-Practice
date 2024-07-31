//Accept 3 numbers and print their multiplication
#include<stdio.h>
int mult(int num1,int num2,int num3)
{
    int ans=0;
    ans=num1*num2*num3;
    // printf("Multiplication of numbers is : ",ans);
    return ans;
}

int main()
{
    int iNo1=0,iNo2=0,iNo3=0,iret=0;

    printf("Enter three numbers\n");
    scanf("%d",&iNo1);
    scanf("%d",&iNo2);
    scanf("%d",&iNo3);

    iret=mult(iNo1,iNo2,iNo3);
    printf("Multiplication of numbers is : %d",iret);
    return 0;
}

