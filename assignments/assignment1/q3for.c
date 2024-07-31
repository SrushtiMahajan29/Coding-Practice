//Print 5 to 1 numbers on screen
#include<stdio.h>

void Display(){
    int i=0;
    int j=5;
    for(j;j>=1;j--)
    {
        printf("%d \n",j);
        j--;
    }
}

int main()
{
    Display();
    return 0;
}