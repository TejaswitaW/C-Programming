//return values by getc and getchar
#include<stdio.h>
int main()
{

    char ch;  /* May cause problems */
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
}
