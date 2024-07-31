//Count number of vowels in a string

#include<stdio.h>

int countDigit(char *str)
{
    int iCnt=0;

while(*str!='\0')
    {//Case Insensitive
        if(*str=='a'|| *str=='e'||*str=='i' || *str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'|| *str=='O'||*str=='U')//For making case sensetive apply logic only for cspital or small either
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
    printf("Count of vowel characters is %d\n",iRet);
    return 0;
}