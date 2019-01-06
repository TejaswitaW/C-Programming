/*Use of addition on pointers*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,a;
    printf("Enter value of a\n");
    scanf("%d",&a);
    p=&a;
    printf("Value at address p is %d\n",*p);
    printf("Address value of p is %u\n",p);
    ++p;
    printf("Address value of p after incrementation is %u\n",p);
    --p;
    printf("Address value of p after decrement is %u\n",p);
    --p;
    printf("Address value of p after further decrement is %u\n",p);

    return 0;

}
