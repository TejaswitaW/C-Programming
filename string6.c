/*Pointer with string*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name[10]="Tejaswita";
    char *p;
    p=name;
    printf("Your name is %s\n",p);
}
