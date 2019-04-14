/*Use of #undef preprocessor directive*/
#include<stdio.h>
#include<string.h>
#define PI 3.14
#undef PI
int main()
{
    int r=0;
    float a;
    printf("This is program to find radius of circle\n");
    printf("Enter value of r\n");
    scanf("%d",&r);
    a=PI*r*r;
    printf("Area of circle is %f\n",a);

}
