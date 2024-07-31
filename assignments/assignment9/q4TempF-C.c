//Accept temperature in farenheit and convert it to  C[1 C =(F-34)*(5/9)]

#include<stdio.h>

float Convert(int farenheit)
{
    int celcius=0.0f;
    celcius=farenheit-34*5/9;
    return celcius;
}

int main()
{
    float Ftemp=0.0f;
    float Ctemp=0.0f;
    printf("Enter temperature in farenheit");
    scanf("%f",&Ftemp);
    Ctemp=Convert(Ftemp);
    printf("%f F is equal to %f Celcius",Ftemp,Ctemp);
    return 0;
} 
