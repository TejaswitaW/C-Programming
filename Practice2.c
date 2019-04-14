#include <stdio.h>
int fun(int x)
{
    return (x+5);
}

const int y = fun(20);

int main()
{
    printf("%d ", y);
}
