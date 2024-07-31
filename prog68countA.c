//Count frequency of given charcter

#include<stdio.h>

int countA(char *str,char ch)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCnt++;

        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20],ch;//20bytes
    int iRet=0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
    printf("Enter the character for searching : \n");
    scanf(" %c",&ch);
   
    iRet=countA(Arr,ch);
    printf("Count f a is %d\n",iRet);
    return 0;
}