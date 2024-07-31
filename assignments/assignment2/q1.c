// #include<stdio.h>
// //Accept number from user and display hello if it is less than or equal to 10 else display Demo
// void display(int iVal)
// {

//     if(iVal<=10)
//     {
//         printf("Hello");
//     }
//     else
//     {
//         printf("Demo");
//     }
// }

// int main()
// {
//     int iNo=0;
//     printf("Enter number");
//     scanf("%d",&iNo);
//     display(iNo);
//     return 0;
// }

//Accept two numbers from user and display first number second number of times
// #include<stdio.h>
// void display(int iValue1,int iValue2)
// {
//     for(int i=0;i<iValue2;i++)
//     {
//         printf("%d ",iValue1);
//     }
// }
// int main()
// {
//     int iNo1,iNo2;
//     printf("Enter first number and second number");
//     scanf("%d %d",&iNo1,&iNo2);
//     display(iNo1,iNo2);
//     return 0;
// }

//Accept number from user and check wheather a number is even or odd

#include<stdio.h>
// #include<stdbool>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL checkEven(int iVal)
{
    if(iVal%2==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    int iNo=0;
    BOOL bRet=FALSE;
    printf("Enter number ");
    scanf("%d",&iNo);
    bRet=checkEven(iNo);
    if(bRet==TRUE)
    {
        printf("%d Number is even",iNo);
    }
    else{
        printf("%d Number is odd",iNo);
    }
    return 0;
}