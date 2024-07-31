// //Find even factorial of a number (5=4*2=8)

// #include<stdio.h>

// int evenFact(int num)
// {
//     int ans=1;
//     for(int i=1;i<=num;i++)
//     {
//         if(i%2==0)
//         {
//             ans=ans*i;
//         }
//     }
//     return ans;
// }

// int main()
// {

//     int no=0;
//     int fact=0;
//     printf("Enter number");
//     scanf("%d",&no);
//     fact=evenFact(no);
//     printf("Even factorial of %d is %d ",no,fact);
//     return 0;
// }
// //Find odd factorial of a number (5=5*3*1=15)

// #include<stdio.h>

// int oddFact(int num)
// {
//     int ans=1;
//     for(int i=1;i<=num;i++)
//     {
//         if(i%2!=0)
//         {
//             ans=ans*i;
//         }
//     }
//     return ans;
// }

// int main()
// {

//     int no=0;
//     int fact=0;
//     printf("Enter number");
//     scanf("%d",&no);
//     fact=oddFact(no);
//     printf("Odd factorial of %d is %d ",no,fact);
//     return 0;
// }
//Find difference between even and odd factorial of a number (15-8=7)

#include<stdio.h>

int diffFact(int num)
{
    int even=1;
    int odd=1;
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            odd=odd*i;
        }
        else
        {
            even=even*i;
        }
    }
    return (even-odd);
}

int main()
{

    int no=0;
    int fact=0;
    printf("Enter number");
    scanf("%d",&no);
    fact=diffFact(no);
    printf("Difference between Even and Odd factorial of %d is %d ",no,fact);
    return 0;
}