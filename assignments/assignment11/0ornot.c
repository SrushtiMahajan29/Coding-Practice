//Accept number from a user and check whether it contains 0 or not

#include<stdio.h>
#include<stdbool.h>

bool check(int iNo)
{
    int iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return true;
        }
        iNo=iNo/10;
    }
    return false;
}

int main()
{
    int num=0;
    bool bret=false;

    printf("Enter a number: ");
    scanf("%d",&num);

    bret=check(num);
    if(bret==true)
    {
        printf("%d contains 0",num);
    }
    else
    {
        printf("%d does not contains 0",num);
    }
    return 0;
}