//Accept area in sqFeet and convert it to sqM (1SQf=0.0929Sqm)
#include<stdio.h>
float convert(int area)
{
    float ans=0;
    ans=area*0.0929;
    return ans;
}
int main()
{
    float sqf=0.0f;
    float sqm=0.0f;
    printf("Enter are in sqf: ");
    scanf("%f",&sqf);
    sqm=convert(sqf);
    printf("%f is equal to %f sqm",sqf,sqm);
    return 0;
}