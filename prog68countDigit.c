//Count number of digits in a string

#include<stdio.h>

int countDigit(char *str)
{
    int iCnt=0;

while(*str!='\0')
    {
        if(*str>='0' && *str<='9')
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
   
    iRet=countDigit(Arr);
    printf("Count of Digits characters is %d\n",iRet);
    return 0;
}