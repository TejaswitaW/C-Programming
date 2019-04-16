// C program to demonstrate
// the behavior of %i and %d
// with printf statement
#include <stdio.h>

int main()
{
    int num = -9;

    // print value using %d
    printf("Value of num using %%d is = %d\n", num);

    // print value using %i
    printf("Value of num using %%i is = %i\n", num);

    return 0;
}
