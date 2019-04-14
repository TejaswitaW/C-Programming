/*Definition of function,i have declared function multiple times*/
#include<stdio.h>
int add(int ,int);
int add(int x,int y);
int add(int a,int b);
int main()
{
    int c=add(7,8);
    printf("Value of addition is %d\n",c);

}
int add(int a,int b)
{
    return(a+b);
}
