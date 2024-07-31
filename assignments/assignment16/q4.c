//Accept n numbers from user and display all elements containing 3 digit in it

#include<stdio.h>
#include<stdlib.h>

void display(int Arr[],int iLength)
{
    printf("Elements with 3 : ");
    for(int i=0;i<iLength;i++)
    {
        int iDigit=0;
        int no=Arr[i];
        while(no!=0)
        {
            iDigit=no%10;
            no=no/10;
            if(iDigit==3)
            {
                printf("\t%d\n",Arr[i]);
                break;
            }
        }
        
    }
}

int main()
{
    int iSize=0;
    int *p=NULL;
    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p=(int *)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements \n");
    for(int i=0;i<iSize;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&p[i]);
    }

    display(p,iSize);

    return 0;
}
