/*use of fscanf function*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char buff[255];
    //Creating character array to store data
    fp=fopen("Array.c","r");
    while(fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
}
