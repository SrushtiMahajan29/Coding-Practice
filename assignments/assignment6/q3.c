// //Aceept a number from user and print its number line on screen

// #include<stdio.h>
// void display(int num)
// {
//     for(int i=-num;i<=num;i++)
//     {
//         printf("%d ",i);
//     }
// }
// int main()
// {
//     int iNo=0;
//     printf("Enter a number : ");
//     scanf("%d",&iNo);
//     display(iNo);
//     return 0;
// }


// //Print all odd till accepted number

// #include<stdio.h>
// void displayOdd(int num)
// {
//     for(int i=1;i<=num;i++)
//     {
//         if(i%2!=0)
//         {
//             printf("%d ",i);
//         }
//     }
// }

// int main()
// {
//     int iNum=0;
//     printf("Enter a number : ");
//     scanf("%d",&iNum);
//     displayOdd(iNum);
//     return 0;
// }


//Print 5 multiples of N

#include<stdio.h>
void mult5(int iNo)
{
    for(int i=1;i<=5;i++)
    {

        printf("%d ",(iNo*i));
    }
}
int main()
{
    int iNo=0;
    printf("Enter a number");
    scanf("%d ",&iNo);

    mult5(iNo);

    return 0;
}