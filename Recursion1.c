//recursion in C,factorial of a number
#include<stdio.h>
#include<stdlib.h>
int facto(int);
int main()
{
    int n,F=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    F=facto(n);
    printf("Factorial of number %d is:%d",n,F);

}
int facto(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return(n*facto(n-1));
    }

}
