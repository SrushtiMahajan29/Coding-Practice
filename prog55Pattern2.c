// // Display the below pattern (Linear pattern)
// // input: 4
// // a   b   c   d   

#include<stdio.h>

void Display(int no)
{
    char ch='a';
    // for(int i=0;i<no;i++&ch++)
    for(int i=0;i<no;i++,ch++)
    {
        printf("%c\t",ch);
        // ch++;
    }
}
int main()
{
    int iNum=0;
    printf("Enter the number : ");
    scanf("%d",&iNum);
    Display(iNum);
    return
     0;
}


