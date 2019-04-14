//use of static variables
#include<stdio.h>
int fun(int n)
{
    static int i=1;
    if(n>=5)
    {
        return n;
    }
    n=n+i;
    i++;
    return fun(n);

}
int main()
{
    int i;
    i=fun(1);
    printf("Value of i is %d\n",i);

}
