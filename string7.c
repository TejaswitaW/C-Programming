/*Copy the contents of string using pointer*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    char name[10]="Vaibhavi";
    char *p,*q;
    p=name;
    q=p;
    printf("Your name  is %s\n",q);
    for(i=0;i<=3;i++)
    {
        name[i]='a';

    }
    q="Tejawita";
    printf("Modified string is %s",q);
}
