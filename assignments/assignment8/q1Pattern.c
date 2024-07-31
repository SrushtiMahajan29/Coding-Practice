//Accept a number print a pattern ip:2  op:* * # # 

#include<stdio.h>

void pattern(int num)
{
    for(int i=0;i<num;i++)
    {
        printf("* ");
    }
    for(int i=0;i<num;i++)
    {
        printf("# ");
    }
}

int main()
{
    int iNum=0;
    printf("Enter a number : ");
    scanf("%d",&iNum);
    pattern(iNum);
}