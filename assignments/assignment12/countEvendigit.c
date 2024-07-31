// Count of even digits im=n entered number

// #include<stdio.h>
// int CountEven(int num)
// {
//     int ans=0;
//     int iDigit=0;
//     while(num!=0)
//     {
//      iDigit=num%10;
//     if(iDigit%2==0)
//     {
//         ans++;
//     }
//     num=num/10;

//     }
// return ans; 

// }

// int main()
// {
//     int iNo=0;
//     int iret=0;
//     printf("Enter number you want ");
//     scanf("%d",&iNo);
//     iret=CountEven(iNo);
//     printf("Number of even digits in entered number %d is:  %d",iNo,iret);
//     return 0;
// }


// // Count of Odd digits in entered number

// #include<stdio.h>
// int CountOdd(int num)
// {
//     int ans=0;
//     int iDigit=0;
//     while(num!=0)
//     {
//      iDigit=num%10;
//     if(iDigit%2!=0)
//     {
//         ans++;
//     }
//     num=num/10;

//     }
// return ans; 

// }

// int main()
// {
//     int iNo=0;
//     int iret=0;
//     printf("Enter number you want ");
//     scanf("%d",&iNo);
//     iret=CountOdd(iNo);
//     printf("Number of Odd digits in entered number %d is:  %d",iNo,iret);
//     return 0;
// }



// Count of digits between 3 to 7 in entered number

#include<stdio.h>
int CountDigit(int num)
{
    int ans=0;
    int iDigit=0;
    while(num!=0)
    {
     iDigit=num%10;
    if(iDigit<=7 && iDigit >=3)
    {
        ans++;
    }
    num=num/10;

    }
return ans; 

}

int main()
{
    int iNo=0;
    int iret=0;
    printf("Enter number you want ");
    scanf("%d",&iNo);
    iret=CountDigit(iNo);
    printf("Number of Odd digits in entered number %d is:  %d",iNo,iret);
    return 0;
}