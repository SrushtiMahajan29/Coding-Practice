#include<stdio.h>

int main()
{
    char ch='\0';
    printf("Enter character : ");
    scanf("%c",&ch);
    printf("Print ASCII value (decimal) of ch is %d\n",ch);
    printf("Print ASCII value (octal) of ch is %o\n",ch);
    printf("Print ASCII value (hexadecimal) of ch is %x\n",ch);
    return 0;

}