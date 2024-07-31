//Replace vowels in a string by _

#include<stdio.h>

void strtoggleX(char *str)
{
    int iCnt=0;

    while(*str!='\0'){
    //Case Insensitive
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }  
        else if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
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
   
    strtoggleX(Arr);
    printf("Updated string is %s\n",Arr);
    return 0;
}