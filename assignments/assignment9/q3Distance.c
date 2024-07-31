//Accept distance in km and convert it to m (1Km=1000m)
#include<stdio.h>
int convert(int distance)
{
    int Mdis=0;
    Mdis=distance*1000;
    return Mdis;
}
int main()
{
    int Km=0;
    int m=0;
    printf("Enter distace in km: ");
    scanf("%d",&Km);
    m=convert(Km);
    printf("%d km is equal to %d m",Km,m);
    return 0;
}