//use of static storage class
#include<stdio.h>
int main()
{
    static int i=5;
    if(--i)
    {
        printf("I am here %d\n",i);
        main();
        //printf("I am here %d\n",i);
        printf("%d",i);
    }
}
