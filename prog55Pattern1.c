// // Display the below pattern (Linear pattern)
// // input: 6
// // *    *   *   *   *   *   *   *   *   *

// #include<stdio.h>

// void Display(int no)
// {
//     for(int i=0;i<no;i++)
//     {
//         printf("*\t");
//     }
// }
// int main()
// {
//     int iNum=0;
//     printf("Enter the number : ");
//     scanf("%d",&iNum);
//     Display(iNum);
//     return 0;
// }



// Display the below pattern (Linear pattern)
// input: 6
//1     2   3   4   5   6

// #include<stdio.h>

// void Display(int no)
// {
//     for(int i=1;i<=no;i++)
//     {
//         printf("%d\t",i);
//     }
// }
// int main()
// {
//     int iNum=0;
//     printf("Enter the number : ");
//     scanf("%d",&iNum);
//     Display(iNum);
//     return 0;
// }





// Display the below pattern (Linear pattern)
// input: 6
//-4    -3  -2  -1  0   1     2   3   4  

// #include<stdio.h>

// void Display(int no)
// {
//     for(int i=-no;i<=no;i++)
//     {
//         printf("%d\t",i);
//     }
// }
// int main()
// {
//     int iNum=0;
//     printf("Enter the number : ");
//     scanf("%d",&iNum);
//     Display(iNum);
//     return 0;
// }



// Display the below pattern (Linear pattern)
// input: 6
//1     #     2     #   3   #   4   #  

// #include<stdio.h>

// void Display(int no)
// {
//     for(int i=1;i<=no;i++)
//     {
//         printf("%d\t#\t",i);
//     }
// }
// int main()
// {
//     int iNum=0;
//     printf("Enter the number : ");
//     scanf("%d",&iNum);
//     Display(iNum);
//     return 0;
// }


// Display below pattern
// 4    3   2   1
#include<stdio.h>

void Display(int no)
{
    for(int i=no;i>0;i--)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int iNum=0;
    printf("Enter the number : ");
    scanf("%d",&iNum);
    Display(iNum);
    return 0;
}