//Count number of smal characters

#include<stdio.h>

int countA(char *str)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str>=97 && *str<=127)
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
   
    iRet=countA(Arr);
    printf("Count of small characters is %d\n",iRet);
    return 0;
}