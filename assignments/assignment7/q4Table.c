#include<stdio.h>
void table(int iNo)
{
    //Table of a number
    // printf("Table of %d \n",&iNo);
    // for(int i=1;i<=10;i++)
    // {
    //     printf("%d \n",i*iNo);
    // }

    //Table in reverse order
    printf("Table of %d in reverse\n",&iNo);
    for(int i=10;i>=1;i--)
    {
        printf("%d \n",i*iNo);
    }
}

int main()
{
    int num=0;
    printf("Enter number: ");
    scanf("%d",&num);
    table(num);
    return 0;
}