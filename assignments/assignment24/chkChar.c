//Accept a character from user and check if its a character or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

// typedef int bool;

bool chkAlpha(char ch)
{
    if((ch>65 && ch<90 )||(ch>97 && ch<122))
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
        printf("It is character");
    }
    else{
        printf("It is not character");
    }

    return 0;
}