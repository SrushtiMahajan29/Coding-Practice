//Problem statement: Display result of student according to his percentage as given below
// 0=35=fail
// 35-49=pass
// 50-59=2nd class
// 60-74=1st class
// 75 and above = 1st class with distinction


#include<stdio.h>

void DisplayResult(float fValue)
{
    if(fValue<0.0 || fValue>100 ){                       ////////Filter applied at staring for reducing time 
        printf("\tInvalid input");
    }
    else if(fValue>=0.0 && fValue<=35.00)
    {
        printf("\tYou are failed");
    }
    else if(fValue>=35.00 && fValue<=49.00)
    {
        printf("\tYou are passed");
    }
    else if(fValue>=49.00 && fValue<=59.00)
    {
        printf("\tYou got 2nd class");
    }
    else if(fValue>=59.00 && fValue<=74.00)
    {
        printf("\tYou got 1st class");
    }
    else if(fValue>=74.00 && fValue<=100.00)
    {
        printf("\tYou got 1st class with distinction");
    }
}

int main()
{
    float fPercentage=0.0f;
    printf("        Enter Percentage you got     :     ");
    scanf("%f",&fPercentage);

    DisplayResult(fPercentage);

    return 0;
}













//Logical or || =If either one or both  condition passes it enters in the{} 
//Logical and && =If both conditions passes it enters in the {} 
//Her we cant use switch case as there is range in condition