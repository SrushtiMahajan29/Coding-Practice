//Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 am, B at 8:30 am, C at 9:20 am and D at 10:30 am. (case insensitive)

#include<stdio.h>

void displaySchedule(char ch)
{
    if(ch=='A' ||ch=='a' )
    {
        printf("Your exam is at 7 am");
    }
    else if(ch=='B' || ch=='b')
    {
        printf("Your exam is at 8:30 am");
    }
    else if(ch=='C' || ch=='c')
    {
        printf("Your exam is at 9:20 am");
    }
    else if(ch=='D' || ch=='d')
    {
        printf("Your exam is at 10:30 am");
    }
    else
    {
        printf("Enter valid class");
    }
}

int main()
{
    char ch='\0';

    printf("Enter your division : ");
    scanf("%c",&ch);

    displaySchedule(ch);

    return 0;
}