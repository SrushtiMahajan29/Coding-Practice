#include<stdio.h>

void display(int num)
{
    if(num<50)
    {
        printf("Small number");
    }
    else if(num<100 && num>50)
    {
        printf("Medium number");
    }
    else{
        printf("Greater number");
    }
}

int main()
{
    int iNo=0;
    printf("Enter a number");
    scanf("%d",&iNo);
    display(iNo);
    return 0;
}