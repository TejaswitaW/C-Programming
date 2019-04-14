/*Use of function preprocessor directive*/
#include<stdio.h>
#include<string.h>
#define MIN(a,b) ((a)>(b)?(b):(a))
int main()
{
    float a,b;
    printf("This is program to learn use of function directive\n");
    printf("Enter values of two numbers\n");
    scanf("%f %f",&a,&b);
    printf("Minimum between a and b is %f \n",MIN(a,b));
}
