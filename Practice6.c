//use of  constant pointer
#include<stdio.h>
int main()
{
    const int *ptr;
    const int a=100;
   // int a=9;
    ptr=&a;
    //*ptr=753;
   // *ptr=190190;gives error
    printf("%d",*ptr);
}
