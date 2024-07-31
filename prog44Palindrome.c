#include<stdio.h>
#include<stdbool.h>

int checkPalindrome(int num)
{
    int iDigit=0;
    int Reverse=0;
    int iCopy=num;      //Xerox kadhali
    while(num!=0)
    {
        iDigit=num%10;
        num=num/10;
        Reverse=(Reverse*10)+iDigit;

    }
    // if(Reverse==iCopy)
    // {
    //     return true;
    // }
    // else 
    // {
    //     return false;
    // }
    return(Reverse==iCopy);         //Return true if equation becomes true else false
}

int main()
{
    int iNo=0;
    bool bret=false;

    printf("Enter a number");
    scanf("%d",&iNo);

    bret=checkPalindrome(iNo);

    if(bret==true)
    {
        printf("%d is a palindrome",iNo);
    }
    else
    {
        printf("%d is not a palindrome",iNo);
    }

}