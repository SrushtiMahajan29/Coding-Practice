// Display elements of array

#include<stdio.h>

// void display(int Arr[],int iSize)
// {
//     int icnt=0;

//     for(icnt=0;icnt<iSize;icnt++)
//     {
//         printf("%d\n",Arr[icnt]);
//     }
// }



// void display(int Arr[],int iSize)
// {
//     int icnt=0;

//     while(icnt!=iSize)
//     {
//         printf("%d\n",Arr[icnt]);
//         icnt++;
//     }
// }

void display(int Arr[],int iSize)
{
    static int icnt=0;

    if(icnt<iSize)
    {
        printf("%d\n",Arr[icnt]);
        icnt++;
        display(Arr,iSize);
    }
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    display(Arr,5);
    return 0;
}