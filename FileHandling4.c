/*Writing employee information to the file*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char cha,name[50];
    int n=0,i=0;
    fp=fopen("EmployeeInfo.txt","w");
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    fprintf(fp,"Number of employees are %d\n",n);
    fprintf(fp,"Employee information is as follows\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the name of employee\n");
        scanf("%s",name);
        fprintf(fp,"Name of the employee is %s\n",name);

    }
    fclose(fp);
}
