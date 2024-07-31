#include<stdio.h>
/*
    A B C D
    A B C D
    A B C D
    A B C D
*/
/*
void pattern(int row,int col)
{
    for(int i=0;i<row;i++)
    {
        char A=65;
        for(int j=0;j<col;j++)
        {
            printf("%c\t",A);
            A++;
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    pattern(row,col);
    return 0;
}
*/

/*
    A B C D
    a b c d
    A B C D
    a b c d
*/
/*
void pattern(int row,int col)
{
    for(int i=1;i<=row;i++)
    {
        char A=65;
        char a=97;
        for(int j=1;j<=col;j++)
        {
            if(i%2==0)
            {
                printf("%c\t",a);
                a++;
            }
            else
            {
                printf("%c\t",A);
                A++;
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    pattern(row,col);
    return 0;
}*/

/*
A A A A A
B B B B B
C C C C C
*/
/*
void pattern(int row,int col)
{
    char A=65;
    for(int i=1;i<=row;i++)
    {
        
        for(int j=1;j<=col;j++)
        {
            printf("%c\t",A);

        }
        A++;
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    pattern(row,col);
    return 0;
}
*/
/*
4 4 4 4 
3 3 3 3
2 2 2 2 
1 1 1 1
*/
/*
void pattern(int row,int col)
{
    for(int i=row;i>0;i--)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    pattern(row,col);
    return 0;
}

/*
1 2 3 4
5 6 7 8 
9 10 11 12
*/

void pattern(int row,int col)
{
    int cnt=1;
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<=col;j++,cnt++)
        {
            printf("%d\t",cnt);
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);

    pattern(row,col);
    return 0;
}
