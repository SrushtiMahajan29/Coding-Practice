#include<stdio.h>

void pattern(int iVal)
{
    // for(int i=0;i<iVal;i++){
    //     printf("*");
    // }
    int i=0;
    while(i<iVal)
    {
        printf("*");
        i++;
    }
}

int main()
{
    int iNo=0;

    printf("Enter number of stars you want on screen");
    scanf("%d",&iNo);
    pattern(iNo);
    return 0;
}