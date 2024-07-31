//Check case of character

#include<stdbool.h>
#include<stdio.h>
bool CheckCapital(char cValue)
{
    // if((cValue>=65) && (cValue<=90))
    // {
    if((cValue>='A') && (cValue<='Z'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int iCnt=0;
    char ch='\0';
    bool bret=false;

    printf("Enter the character: \n");
    scanf("%d",&ch);

    bret=CheckCapital(ch);

    if(bret==true)
    {
        printf("Entered character is Capital\n");
    }
    else
    {
        printf("Entered character is not Capital\n");
    }

}