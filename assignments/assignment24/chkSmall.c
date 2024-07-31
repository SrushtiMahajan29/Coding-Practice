//Accept character from user and check whether its a small or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

// typedef int bool;

bool chkAlpha(char ch)
{
    if(ch>96 && ch<123 )
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char ch='\0';

    bool bret=FALSE;

    printf("Enterc the character\n");
    scanf("%c",&ch);

    bret=chkAlpha(ch);

    if(bret==TRUE)
    {
        printf("It is small character");
    }
    else{
        printf("It is not small character");
    }

    return 0;
}