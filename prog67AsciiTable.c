#include<stdio.h>

int main()
{
    int iCnt=0;

    printf("--------------------------------------------------------\n");
    printf("----------------------ASCII-----------------------------\n");
    printf("----------------------TABLE-----------------------------\n");
    printf("-Dec------Hex------Oct--------Char----------------------\n");
    char ch='\0';
    for(iCnt=0;iCnt<=127;iCnt++)
    {
    printf("%d\t%x\t%o\t->%c\n",iCnt,iCnt,iCnt,iCnt);
    }
    return 0;

}