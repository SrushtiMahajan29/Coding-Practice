//Accept number and print numbers till that number

#include<stdio.h>
void display(int num)
{
    for(int i=1;i<=num;i++)
    {
        printf("%d ",i);
    }
}

int main()
{
    int iNo=0;
    printf("Enter a number ");
    scanf("%d",&iNo);
    display(iNo);
    return 0;
}