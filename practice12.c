//Scanset in c
#include<stdio.h>
int main()
{
    char name[50],sirname[50],cname[50];
    printf("Enter any string\n");
    gets(name);
    gets(sirname);
    gets(cname);
    printf("Now puts function is doing its task\n");
//    fputs(name);
    fputs(name,stdout);
    fputs(sirname,stdout);
    fputs(cname,stdout);
 //   scanf("%[^\n]s",name);
   // printf("String entered is %s\n",name);
    /*printf("Enter any string\n");
    scanf("%[^M]s",name);
    printf("String entered is %s\n",name);*/
}
