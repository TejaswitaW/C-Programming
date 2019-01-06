/*pointer to a function*/
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,c;
    int (*ptr)();
    ptr=&add;
    printf("Enter values of a and b\n");
    scanf("%d %d",&a,&b);
    c=(*ptr)(a,b);
    printf("Result of addition is %d \n",c);



}
int add(int a,int b)
{
    return(a+b);
}
