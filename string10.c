/*Operations on string using in built string functions*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str1[]="Tejaswita",str2[]="Vaibhavi";
    printf("Result of comparision of two strings is %d\n",strcmp(str1,str2));
    printf("%d\n",'T');
    printf("%d\n",'V');
    printf("Trying string copying function is %s\n",strcpy(str1,str2));
    printf("String 1 is %s\n",str1);
    printf("String 2 is %s\n",str2);
    printf("Lower form of string 2 is %s\n",strlwr(str2));
    printf("Upper form of string 1 us %s\n",strupr(str1));
    printf("Use of string reversal function is %s\n",strrev(str1));
}
