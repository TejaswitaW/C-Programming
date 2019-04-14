/*use of fprintf function in file handling*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("file.txt","w");
    fprintf(fp,"Hello File by writing using fprintf function\n Tell me information about you\n");
    fclose(fp);
}
