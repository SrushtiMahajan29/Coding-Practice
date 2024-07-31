#include<stdio.h>

int Largest(int iNo1,int iNo2, int iNo3)
{
    if(iNo1>=iNo2 && iNo1>=iNo3)                    //if equal to is not given 10, 10 , 5 condition not checked properly
    {
        return iNo1;
    }
    else if(iNo2>=iNo1 && iNo2>=iNo3)
    {
        return iNo2;
    }
    else {                                                   //
        return iNo3;
    }
    
} 

int main()
{
    int inum1=0;
    int inum2=0;
    int inum3=0;
    int iRet=0;

    printf("Enter 1st number ");
    scanf("%d",&inum1);
    printf("Enter 2nd number ");
    scanf("%d",&inum2);
    printf("Enter 3rd number ");
    scanf("%d",&inum3);

    iRet=Largest(inum1,inum2,inum3);
    printf("Largest of 3 numbers is %d ",iRet);

}