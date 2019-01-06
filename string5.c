/*printing strings with sapce character*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char fullName[50];
    printf("Enter your name\n");
    scanf("%[^\n]s",fullName);
    printf("Your name is %s\n",fullName);
}
