// //Accept numbers and display numbers betn them
// #include<stdio.h>

// void displayRange(int num1,int num2)
// {
//     for(int i=num1;i<=num2;i++)
//     {
//         printf("%d ",i);
//     }
// }

// int main()
// {
//     int iNo1=0;
//     int iNo2=0;
//     printf("Enter number 1 and number 2 : ");
//     scanf("%d",&iNo1);
//     scanf("%d",&iNo2);

//     displayRange(iNo1,iNo2);
//     return 0;
// }
// //Accept numbers and display even numbers betn them
// #include<stdio.h>

// void displayRange(int num1,int num2)
// {
//     for(int i=num1;i<=num2;i++)
//     {
//         if(i%2==0)
//         printf("%d ",i);
//     }
// }

// int main()
// {
//     int iNo1=0;
//     int iNo2=0;
//     printf("Enter number 1 and number 2 : ");
//     scanf("%d",&iNo1);
//     scanf("%d",&iNo2);

//     displayRange(iNo1,iNo2);
//     return 0;
//}
// //Accept numbers and display sum of numbers betn them
// #include<stdio.h>

// int displaySum(int num1,int num2)
// {
//     int sum=0;
//     for(int i=num1;i<=num2;i++)
//     {
//         sum=sum+i;
//     }
//     return sum;
// }

// int main()
// {
//     int iNo1=0;
//     int iNo2=0;
//     int iret=0;
//     printf("Enter number 1 and number 2 : ");
//     scanf("%d",&iNo1);
//     scanf("%d",&iNo2);

//     iret=displaySum(iNo1,iNo2);
//     printf("Sum of numbers is: %d",iret);
//     return 0;
// }
// //Accept numbers and display sum of even numbers betn them
// #include<stdio.h>

// int displayEvenSum(int num1,int num2)
// {
//     int sum=0;
//     for(int i=num1;i<=num2;i++)
//     {
//         if(i%2==0)
//         sum=sum+i;
//     }
//     return sum;
// }

// int main()
// {
//     int iNo1=0;
//     int iNo2=0;
//     int iret=0;

//     printf("Enter number 1 and number 2 : ");
//     scanf("%d",&iNo1);
//     scanf("%d",&iNo2);

//     iret=displayEvenSum(iNo1,iNo2);
//     printf("Sum of even numbers is: %d",iret);
//     return 0;
// }
//Accept numbers and display sum of even numbers betn them
#include<stdio.h>

int displayRevRange(int num1,int num2)
{
    for(int i=num2;i>=num1;i--)
    {
        printf("%d ",i);
    }
}

int main()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter number 1 and number 2 : ");
    scanf("%d",&iNo1);
    scanf("%d",&iNo2);

    displayRevRange(iNo1,iNo2);

    return 0;
}
