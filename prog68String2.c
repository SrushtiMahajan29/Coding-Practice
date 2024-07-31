#include<stdio.h>

// void Display(char *str)
// {
void Display(char str[])
{
    printf("String is : %s\n",str);
}

int main()
{
    char Arr[20];//20bytes

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);
   
    Display(Arr);
    
    return 0;
}