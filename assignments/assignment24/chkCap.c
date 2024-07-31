//Accept character from user and check whether its a capital or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

// typedef int bool;

bool chkAlpha(char ch)
{
    if(ch>64 && ch<91 )
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char ch='\0';

    bool bret=FALSE;

    printf("Enter[] the character\n");
    scanf("%c",&ch);

    bret=chkAlpha(ch);

    if(bret==TRUE)
    {
        printf("It is capital character");
    }
    else{
        printf("It is not capital character");
    }

    return 0;
}