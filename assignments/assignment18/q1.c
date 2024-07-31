#include<stdio.h>

//input :  row 4 column 3
/*   
   *    *   *
   *    *   *
   *    *   * 
*/
/*
void pattern(int irow,int icol)
{
    for(int i=0;i<irow;i++)
    {
        for(int j=0;j<icol;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row number : ");
    scanf("%d",&row);

    printf("Enter column number : ");
    scanf("%d",&col);
    
    pattern(row,col);
    
    return 0;
}*/

/*
1   2   3   
1   2   3
1   2   3
*/
/*
void pattern(int irow,int icol)
{
    for(int i=0;i<irow;i++)
    {
        for(int j=1;j<=icol;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row number : ");
    scanf("%d",&row);

    printf("Enter column number : ");
    scanf("%d",&col);
    
    pattern(row,col);
    
    return 0;
}*/

/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
/*
void pattern(int irow,int icol)
{
    for(int i=0;i<irow;i++)
    {
        for(int j=icol;j>0;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row number : ");
    scanf("%d",&row);

    printf("Enter column number : ");
    scanf("%d",&col);
    
    pattern(row,col);
    
    return 0;
}*/


/*
* # * #
* # * #
* # * #

*/
/*
void pattern(int irow,int icol)
{
    for(int i=0;i<irow;i++)
    {
        for(int j=1;j<=icol;j++)
        {
            if(j%2==0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row number : ");
    scanf("%d",&row);

    printf("Enter column number : ");
    scanf("%d",&col);
    
    pattern(row,col);
    
    return 0;
}*/

/*
1 1 1 1 
2 2 2 2
3 3 3 3 
4 4 4 4

*/
void pattern(int irow,int icol)
{
    for(int i=1;i<=irow;i++)
    {
        for(int j=1;j<=icol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int row=0,col=0;
    printf("Enter row number : ");
    scanf("%d",&row);

    printf("Enter column number : ");
    scanf("%d",&col);
    
    pattern(row,col);
    
    return 0;
}