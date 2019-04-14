/*Addition of students marks using array*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int marks[5],i,total=0;
    printf("Enter marks of five subjects of a student\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        total=total+marks[i];
    }
    printf("Total marks of students are %d\n",total);
}
