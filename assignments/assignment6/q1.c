//Accept number from user and print that number of * And $

#include<stdio.h>

void display(int num)
{
    for(int i=0;i<num;i++)
    {
        printf("* $ ");
    }
}

int main()
{
    int iNo=0;
    printf("Enter number : ");
    scanf("%d",&iNo);

    display(iNo);

    return 0;
}