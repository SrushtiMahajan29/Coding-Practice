#include<stdio.h>

int diffDigit(int no)
{
    int iDigit=0;
    int iEven=0,iOdd=0;

    while(no!=0)
    {
        iDigit=no%10;
        if(iDigit%2==0)
        {
            iEven=iEven+iDigit;
        }
        else{
            iOdd=iOdd+iDigit;
        }
    }
    return (iEven-iOdd);

}

int main()
{
    int num=0;
    int iret=0;
    printf("Enter number you want..");
    scanf("%d",&num);
    iret=diffDigit(num);
    printf("Difference between even and odd digit of %d is: %d",num,iret);
    return 0;
}