// Strings length function

#include<stdio.h>

int strlenX(char* str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int strlenXR(char* str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        iCnt++;
        str++;
        strlenXR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);
    
    int length=strlenXR(Arr);

    printf("Lenth of string : %d",length);

    return 0;
}