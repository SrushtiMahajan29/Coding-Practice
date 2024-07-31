//Problem statement:
/*Create a application for a school. Where user is a students from 1st to 5th students
show their examination time according to their standards as given below
2=9
3=10
4=11
5=12*/



#include <stdio.h>

void DisplayExamTime(int std)
{
    switch(std)
    {
        case 1: 
            printf("Your exam is at 8 am\n");
            break;
        case 2: 
            printf("Your exam is at 9 am\n");
            break;
        case 3: 
            printf("Your exam is at 10 am\n");
            break;
        case 4: 
            printf("Your exam is at 11 am\n");
            break;
        case 5: 
            printf("Your exam is at 12 am\n");
            break;
        default: 
            printf("Enter correct standard!!\n");
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