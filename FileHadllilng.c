/*File handling in C*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("Student_Name.txt","r");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }

    fclose(fp);
}
