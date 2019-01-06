/*Use of string function strstr()*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char line[]="My name is Ms.Tejaswita Sitaram Wakhure working as a Artificial Intelligence Engineer in Bangluru";
    char *p;
    p=strstr(line,"Artificial");
    printf("The matched string is %s\n",p);
}
