//Accept one digit number and print word for it
#include<stdio.h>

void display(int num)
{
    switch(num)
    {
        case 1:
            printf("One");
            break;
        case 2: 
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        case -1:
            printf("-One");
            break;
        case -2:
            printf("-Two");
            break;
        case -3:
            printf("-Three");
            break;
        case -4:
            printf("-Four");
            break;
        case -6:
            printf("-Six");
            break;
        case -7:
            printf("-Seven");
            break;
        case -8:
            printf("-Eight");
            break;
        case -9:
            printf("-Nine");
            break;
        
    }

}

int main()
{
    int iNum=0;
    printf("Enter a one digit number: ");
    scanf("%d ",&iNum);

    if(iNum>9 || iNum<-9)
    {
        printf("Enter one digit number only");
            scanf("%d" ,&iNum);
            display(iNum);
    }
    else{
        display(iNum);
    }

    return 0;
}