// 1 1 1 1
// * * * *
// 1 1 1 1
// * * * *


#include<stdio.h>
void Display(int iRow,int iCol)
{
    for(int i=1;i<=iRow;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
            if(i%2==0)
                printf("*\t");
            else
                printf("%d\t",i);
        }
        printf("\n");
    }
}
int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter number of rows : ");
    scanf("%d",&iNo1);

    printf("Enter number of columns : ");
    scanf("%d",&iNo2);
    Display(iNo1,iNo2);
    return 0;

}