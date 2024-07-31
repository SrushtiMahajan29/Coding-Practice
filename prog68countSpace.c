//Count number of vowels in a string

#include<stdio.h>

int countSpaces(char *str)
{
    int iCnt=0;

while(*str!='\0')
    {//Case Insensitive
        if(*str==' ') {
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
    printf("Count of spacces characters is %d\n",iRet);
    return 0;
}