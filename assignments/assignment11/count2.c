// // Problem Statement :  count how many times 2 is occured in a number

// // //////////////////////////////////
// //Function header
// ///////////////////////////////////////
// //fun name: count of 2
// //Description: display number of times digit 2 is present in a number
// //Input :-int
// //output:-int
// //author: Srushti Satish Mahajan
// //Date  :29/10/2023
// ///////////////////////////////////////

// int Count2(int no)
// {
//     int iDigit=0,count=0;
//     while(no!=0)
//     {
//         iDigit=no%10;
//         if(iDigit==2)
//             count++;
//         no=no/10;
//     }
//     return count;
// }

// #include<stdio.h>
// int main()
// {
//     int iNum=0,iret=0;
    
//     printf("Enter number : ");
//     scanf("%d",&iNum);

//     iret=Count2(iNum);

//     printf("Number of times 2 occured in a number is %d: ",iret);

//     return 0;
// }
// // Problem Statement :  count how many times 4 is occured in a number

// // //////////////////////////////////
// //Function header
// ///////////////////////////////////////
// //fun name: count of 4
// //Description: display number of times digit 4 is present in a number
// //Input :-int
// //output:-int
// //author: Srushti Satish Mahajan
// //Date  :29/10/2023
// ///////////////////////////////////////

// int Count4(int no)
// {
//     int iDigit=0,count=0;
//     while(no!=0)
//     {
//         iDigit=no%10;
//         if(iDigit==4)
//             count++;
//         no=no/10;
//     }
//     return count;
// }

// #include<stdio.h>
// int main()
// {
//     int iNum=0,iret=0;
    
//     printf("Enter number : ");
//     scanf("%d",&iNum);

//     iret=Count4(iNum);

//     printf("Number of times 4 occured in a number is:  %d ",iret);

//     return 0;
// }
// Problem Statement :  count how many times less than 6 is occured in a number

// //////////////////////////////////
//Function header
///////////////////////////////////////
//fun name: count
//Description: display number of times digit  less than 6 is present in a number
//Input :-int
//output:-int
//author: Srushti Satish Mahajan
//Date  :29/10/2023
///////////////////////////////////////

#include<stdio.h>

int Count(int no)
{
    int iDigit=0,count=0;
    while(no!=0)
    {
        iDigit=no%10;
        if(iDigit<=6)
            count++;
        no=no/10;
    }
    return count;
}

int main()
{
    int iNum=0,iret=0;
    
    printf("Enter number : ");
    scanf("%d",&iNum);

    iret=Count(iNum);

    printf("Number of times  less than 6 occured in a number is:  %d ",iret);

    return 0;
}