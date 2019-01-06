/*Use of strings*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[10];
    printf("Enter your name first\n");//if we enter name size more than array size then run time error comes
    scanf("%s",name);
    printf("Your name is %s \n",name);
}
