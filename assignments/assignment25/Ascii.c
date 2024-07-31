#include<stdio.h>

void displayASCII()
{
    printf("--------------ASCII Table------------------\n");
    printf("--dec----hex----oct----char-----\n");
    printf("-------------------------------------------\n");
    for(int i=0;i<=127;i++)
    {
        printf("%d\t%x\t%o\t%c")
    }
}

int main()
{
    displayASCII();
    return 0;
}