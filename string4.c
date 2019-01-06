/*calculating number of vowels in the string*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50];
    int i,count=0,a;
    printf("Enter your name\n");
    scanf("%s",name);
    for(i=0;name[i];i++)
    {
        if(name[i]=='a'||name[i]=='i'||name[i]=='e'||name[i]=='o'||name[i]=='u')
        {
            switch(name[i])
            {
                case 'a':if(a>0)
                            {
                                continue;
                            }
                        else
                        {
                            a++;
                        }
            }
        }
    }
    count=a;
    printf("Number of vowels in the string are %d\n",count);
}
