// Even elements of array

#include<stdio.h>

void Even(int Arr[], int iSize)
{
    int iCnt = 0;

    while(iCnt < iSize)
    {
        if(Arr[iCnt]%2==0)
            printf("Even : %d\n",Arr[iCnt]);
        iCnt++;
    }
}

void EvenR(int Arr[],int iSize)
{
    static int icnt=0;

    if(icnt<iSize)
    {
        if(Arr[icnt]%2==0)
            printf("Even :%d\n",Arr[icnt]);
        icnt++;
        EvenR(Arr,iSize);
    }
}

int main()
{
    int Arr[5]={10,21,33,47,50};

    EvenR(Arr,5);
    return 0;
}