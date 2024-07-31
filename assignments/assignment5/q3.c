#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

bool chkEqual(int num1,int num2)
{
    if(num1==num2)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iNo1=0;
    int iNo2=0;
    bool bret=false;
    printf("Enter two numbers ");
    scanf("%d %d",&iNo1,&iNo2);
    bret=chkEqual(iNo1,iNo2);
    if(bret==true)
    {
        printf("Equal");
    }
    else{
        printf("Non equal");
    }
    return 0;
}