/*Use of math.h files functionality*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int a;
    float b;
    printf("Enter value of any integer please\n");
    scanf("%d",&a);
    printf("Enter value of any floating point number\n");
    scanf("%f",&b);
    printf("Square root of number is %lf \n",sqrt(a));
    printf("Floor value of given number is %f\n",floor(b));
    printf("Ceil value of given number is %f\n",ceil(b));
    printf("Power is %f",pow(2,4));

}
