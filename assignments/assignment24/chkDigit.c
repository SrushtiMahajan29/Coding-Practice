//Accept a character from user and check if its a digit or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

// typedef int bool;

bool chkDigit(char ch)
{
    if(ch>47 && ch<58 )
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

    bret=chkDigit(ch);

    if(bret==TRUE)
    {
        printf("It is digit");
    }
    else{
        printf("It is not digit");
    }

    return 0;
}