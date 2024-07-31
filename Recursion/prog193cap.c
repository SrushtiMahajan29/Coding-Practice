#include<stdio.h>

int capCount(char*str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
              iCnt++;
        }
        str++;
    
    }
    return iCnt;
}


int capCountR(char*str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
              iCnt++;
        }
        str++;
    capCountR(str);
    }
    return iCnt;
}

int main()
{
    int iret=0;
    char Arr[20];
    printf("Enter string");
    scanf("%[^'\n']s",Arr);
    iret=capCountR(Arr);
    printf("Number of cap : %d",iret);
    return 0;
}