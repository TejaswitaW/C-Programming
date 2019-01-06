#include<stdio.h>
int main()
{
    char a[] = "%d\n";
    a[1] = 'k';
    printf(a, 65);
    printf("%b\n",65);
    return 0;
    printf("%z\n",65);

}
