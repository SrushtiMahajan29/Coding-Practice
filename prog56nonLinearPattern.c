/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

// #include<stdio.h>

// void Display()
// {
    // for(int i=1;i<=4;i++)
    // {
    //     printf("*\t");
    // }
    // printf("\n");
    // for(int i=1;i<=4;i++)
    // {
    //     printf("*\t");
    // }
    // printf("\n");    
    // for(int i=1;i<=4;i++)
    // {
    //     printf("*\t");
    // }
    // printf("\n");


// #include<stdio.h>

// void Display(int iRow,int iCol)
// {
//     for(int i=1;i<=iRow;i++)
//     {
//         for(int j=1;j<=iCol;j++)
//         {
//             printf("*\t");
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int iNo1=0,iNo2=0;

//     printf("Enter number of rows : ");
//     scanf("%d",&iNo1);

//     printf("Enter number of columns : ");
//     scanf("%d",&iNo2);
//     Display(iNo1,iNo2);
//     return 0;
// }




// 1 1 1 1
// 1 1 1 1
// 1 1 1 1 
// 1 1 1 1
// #include<stdio.h>

// void Display(int iRow,int iCol)
// {
//     for(int i=1;i<=iRow;i++)
//     {
//         for(int j=1;j<=iCol;j++)
//         {
//             printf("1\t");
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int iNo1=0,iNo2=0;

//     printf("Enter number of rows : ");
//     scanf("%d",&iNo1);

//     printf("Enter number of columns : ");
//     scanf("%d",&iNo2);
//     Display(iNo1,iNo2);
//     return 0;
// }



// //1 1 1 1 
// //2 2 2 2
// //3 3 3 3
// //4 4 4 4 
// #include<stdio.h>

// void Display(int iRow,int iCol)
// {
//     for(int i=1;i<=iRow;i++)
//     {
//         for(int j=1;j<=iCol;j++)
//         {
//             printf("%d\t",i);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int iNo1=0,iNo2=0;

//     printf("Enter number of rows : ");
//     scanf("%d",&iNo1);

//     printf("Enter number of columns : ");
//     scanf("%d",&iNo2);
//     Display(iNo1,iNo2);
//     return 0;
// }



//1 2 3 4  
//1 2 3 4
//1 2 3 4
//1 2 3 4 
#include<stdio.h>

void Display(int iRow,int iCol)
{
    for(int i=1;i<=iRow;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter number of rows : ");
    scanf("%d",&iNo1);

    printf("Enter number of columns : ");
    scanf("%d",&iNo2);
    Display(iNo1,iNo2);
    return 0;
}






