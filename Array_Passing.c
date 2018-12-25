/*Passing array to a function*/
#include<stdio.h>
#include<stdlib.h>
int NumToChar(int arr[]);
int main()
{
    int arr[8]={97,98,99,100,101,102,103,104},i;
    NumToChar(arr);
    for(i=0;i<8;i++)
    {
        printf("%c\n",arr[i]);
    }
}
int NumToChar(int a[])
{
    int i=8;
    for(i=0;i<8;i++)
    {
        a[i]=a[i]+5;
    }
}
