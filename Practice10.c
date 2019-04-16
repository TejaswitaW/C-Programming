//Return value by printf and scanf
#include<stdio.h>
int main()
{

    int i,j,a,b;
    i=printf("My name is Tejaswita");
    printf("\nEnter two numbers\n");
    j=scanf("%d %d",&a,&b);
    printf("Value return by printf function is %d\n",i);
    printf("Value return by scanf function is %d\n",j);
}
