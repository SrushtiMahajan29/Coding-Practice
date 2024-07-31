// Sum of elements of array

#include<stdio.h>


int Sum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    while(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
    }
    return iSum;
}

int sumElements(int Arr[],int iSize)
{
    static int icnt=0;
    static int sum=0;
    if(icnt<iSize)
    {
        sum=sum+Arr[icnt];
        icnt++;
        sumElements(Arr,iSize);
    }
    return sum;
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    int sum=sumElements(Arr,5);
    printf("Sum of elements of array is :%d",sum);
    return 0;
}