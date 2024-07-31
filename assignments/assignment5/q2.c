//Is the number greater than 100 or not

#include<stdio.h>
typedef int bool;
#define true  1
#define false 0


bool greater(int num)
{
    if(num>100)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int iNo=0;
    bool bret=false;
    printf("Enter a number : ");
    scanf("%d",&iNo);
    bret=greater(iNo);
    if(bret==true)
    {
        printf("%d is greater than 100",iNo);
    }
    else
    {
        printf("%d is not greater than 100",iNo);
    }
    return 0;
}