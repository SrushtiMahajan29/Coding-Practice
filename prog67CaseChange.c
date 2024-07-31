//Check case of character

#include<stdbool.h>
#include<stdio.h>
char ConvertSmall(char cValue)
{
    return cValue+32;
}
char ConvertCapital(char cValue)
{
    return cValue-32;
}

int main()
{
    char ch='\0';
    char ch1='\0';
    char cRet='\0';

    // printf("Enter the capital character: \n");
    // scanf("%c",&ch);

    // cRet=ConvertSmall(ch);

    // printf("Converted small letter is :%c",cRet);
    
    printf("Enter the small character: \n");
    scanf("%c",&ch1);

    cRet=ConvertCapital(ch);

   printf("Converted capital letter is :%c",cRet);

}