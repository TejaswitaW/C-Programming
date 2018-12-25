#include<stdio.h>
#include"myfile.h"

int main()
{
    printf("Value of external variable x is %d\n",x);
    printf("%d ",sizeof(int));
    printf("%d ",sizeof(float));
    printf("%d ",sizeof(long));
    printf("%d ",sizeof(char));
    printf("%d ",sizeof(unsigned int));
    printf("%d ",sizeof(unsigned char));
}
