//input  5
//output A B C D E

#include<stdio.h>
/*
void pattern(int iLength)
{
    char A=65;
    for(int i=0;i<iLength;i++)
    {
        printf("%c\t",A);
        A++;
    }
}

int main()
{
    int iSize=0;

    printf("Enter number : ");
    scanf("%d",&iSize);
    
    pattern(iSize);
    
    return 0;
}*/

//input: 5
//Output: 5 # 4 # 3 # 2 # 1 #
/*
void pattern(int iLength)
{
    int no=iLength;
    for(int i=0;i<iLength;i++)
    {
        printf("%d\t",no);
        printf("#\t");
        no--;
    }
}

int main()
{
    int iSize=0;

    printf("Enter number : ");
    scanf("%d",&iSize);
    
    pattern(iSize);
    
    return 0;
}*/

//input: 5
//Output: 1 * 2 * 3 * 4 * 5 *
/*
void pattern(int iLength)
{
    for(int i=1;i<=iLength;i++)
    {
        printf("%d\t",i);
        printf("*\t");
    }
}

int main()
{
    int iSize=0;

    printf("Enter number : ");
    scanf("%d",&iSize);
    
    pattern(iSize);
    
    return 0;
}*/


//input: 8
//Output: 2 4 6 8 10 12 16

void pattern(int iLength)
{
    for(int i=1;i<=iLength;i++)
    {
        printf("%d\t",2*i);
    }
}

int main()
{
    int iSize=0;

    printf("Enter number : ");
    scanf("%d",&iSize);
    
    pattern(iSize);
    
    return 0;
}