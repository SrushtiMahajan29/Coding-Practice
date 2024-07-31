//Accept n numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int oddPro(int Arr[],int iLength)
{
    int pro=1;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2!=0)
        {
            pro=pro*Arr[i];
        }
    }
    return pro;
}

int main()
{
    int iSize=0,iret=0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    int *p=NULL;
    p=(int*)malloc(sizeof(iSize));
    printf("Enter %d elements: ",iSize);

    for(int i=0;i<iSize;i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d",&p[i]);
    }
    iret=oddPro(p,iSize);
    printf("Product of elements : %d" ,iret);
    free(p);
    return 0;
}