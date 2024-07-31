// Problem Statement :  Accept radius of circle from user and calculate area of circle
//formula : Pie *r*r 
// Pie=3.14 
 
//Step 1: Understansd problem statement
//Conclusion : We are going to use the formula Pie *r*r 

//Step 2: Algorithm
/*  start
        Accept radius from user and store it in RADIUS
        Create variable as PI and store value 3.14


        calculate area
//display area
//  stop */



#include <stdio.h>

// ////////////////////////////////////
//Function header
///////////////////////////////////////
//fun name:  CalculateArea
//Description: 
//Input :float
//output:float
//author: Srushti Satish Mahajan
//Date  :2/10/2023
///////////////////////////////////////
#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns=0.0f;
    // auto const float fPi=3.14168f;

    fAns = PI*fValue*fValue;
    return fAns;
}

int main(){
    auto float fRadius=0.0f;
    auto float fArea=0.0f;

    printf("Enter radius of circle : \n");
    scanf("%f",&fRadius);

    fArea=CalculateArea(fRadius);

    printf("Area of circle is %f \n",fArea);
    return 0;
}