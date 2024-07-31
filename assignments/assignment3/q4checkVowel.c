//Check whether vowel or not

#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

bool checkVowel(char ch)
{
    if(ch=="a" || ch=="e" || ch=="i" || ch=="o" || ch="u")
    {
        return true;
    }
    else
        return false;
}

int main()
{
    char ch="a";
    bool bret=false;

    printf("Enter character");
    scanf("%s",&ch);

    bret=checkVowel(ch);
    if(bret==true)
    {
        printf("%c is a vowel",ch);
    }
    else{
        printf("%c Not a vowel it is a conconent",ch);
    }
    return 0;
}