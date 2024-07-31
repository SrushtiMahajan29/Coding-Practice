// //Area of circle

// #include<stdio.h>
// #define pi 3.14
// float CalArea(float radius)
// {
//     float area=0.0f;
//     area=pi*radius*radius;
//     return area;
// }

// int main()
// {
//     float rad=0.0f;
//     float area=0.0f;
//     printf("Enter radius of circle : ");
//     scanf("%f",&rad);
//     area=CalArea(rad);
//     printf("Area of circle with radius %f is %f",rad,area);
//     return 0;
// }

//Area of rectangle

#include<stdio.h>

float RArea(float h,float w)
{
    float ans=0.0f;
    ans=h*w;
    return ans;
}

int main()
{
    float height=0.0f;
    float wid=0.0f;
    float area=0.0f;

    printf("Enter height and width of a rectangle ");
    scanf("%f",&height);
    scanf("%f",&wid);

    area=RArea(height,wid);

    printf("Area of rectangle with height as %f and widt as %f is %f ",height,wid,area);
    return 0;
}