/*Two dimensional array*/
#include<stdio.h>
#include<conio.h>
int main()
{

    int a[3][3]={3,5,7,9,11,13,15,17,19},i=0,j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
