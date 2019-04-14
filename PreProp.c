/*study of preprocessor directives in C,use of #define*/
#include<stdio.h>
#include<string.h>
#define PI 3.14 //object macro
int main()
{
    float rad=0,A=0;
    printf("This is program to calculate area of a circle\n");
    printf("Enter radius of the circle\n");
    scanf("%f",&rad);
    A=PI*rad*rad;
    printf("Area of circle is %f\n",A);
}
