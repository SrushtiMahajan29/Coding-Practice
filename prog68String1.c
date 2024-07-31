#include<stdio.h>

int main()
{
    char Arr[20];//20bytes
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);//^-Not (It takes input letters till we go to next line )
    // gets(Arr);//replace 
    // puts to replace printf
    printf("Entered string is : %s\n",Arr);
    return 0;
}