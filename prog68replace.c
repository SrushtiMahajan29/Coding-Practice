//Count number of vowels in a string

#include<stdio.h>

void replace(char *str)
{
    int iCnt=0;

while(*str!='\0')
    {//Case Insensitive
        if(*str=='a') {
                *str='_';
        }
        
        str++;
    }
}

int main()
{
    char Arr[20];//20bytes
    int iRet=0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
   
    replace(Arr);
    printf("Updated string is %s\n",Arr);
    return 0;
}