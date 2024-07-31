//Count capital letters
#include<stdio.h>

int countCap(char *str)
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

int main()
{
    char Arr[20];//20bytes
    int iRet=0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
   
    iRet=countCap(Arr);
    printf("Count of Capital characters is %d\n",iRet);
    return 0;
}