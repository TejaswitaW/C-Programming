//recursion in C,addition of n consecutive numbers
#include<stdio.h>
#include<stdlib.h>
int fun(int);
int main()
{
    int n,sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    sum=fun(n);
    printf("Sum of n natural numbers is:%d",sum);

}
int fun(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return(n+fun(n-1));
    }

}
