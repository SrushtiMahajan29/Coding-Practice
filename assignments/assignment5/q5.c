#include<stdio.h>

float CalPer(int tot,int obtained)
{
    float ans=0;
    ans=((float)obtained/(float)tot)*100;
    return ans;
}

int main()
{
    int iObtained=0;
    int iTotal=0;
    float fret=0.0f;
    printf("Enter total marks: ");
    scanf("%d",&iTotal);
    printf("Enter obtained marks : ");
    scanf("%d",&iObtained);

    fret=CalPer(iTotal,iObtained);

    printf("Your percentage are: %f %",fret);

    return 0;
}