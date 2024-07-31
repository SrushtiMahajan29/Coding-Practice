//Problem statement:
/*Create a application for a school. Where user is a students from 1st to 5th students
show their examination time according to their standards as given below
1=8am
2=9am
3=10am
4=11am
5=12am */



#include <stdio.h>

void DisplayExamTime(int std)
{
    if(std<1 || std >5)
    {
        printf("Enter valid standard\n");
    }
    else if( std==1)
    {
        printf("Your exam is at 8 am\n");
    }
    else if( std==2)
    {
        printf("Your exam is at 9 am\n");
    }
    else if( std==3)
    {
        printf("Your exam is at 10 am\n");
    }
    else if( std==4)
    {
        printf("Your exam is at 11 am\n");
    }
    else if( std==5)
    {
        printf("Your exam is at 12 am\n");
    }
}

int main()
{
    int standard;
    
    printf("Enter your standard\n");
    scanf("%d",&standard);
    
    DisplayExamTime(standard);
    
    return 0;
}