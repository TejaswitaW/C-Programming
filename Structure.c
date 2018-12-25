/* C program using structure*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct Emp{
    int Emp_ID;
    char Emp_Name[50];
    }Emp1;
    printf("Enter employee information\n");
   /* int i=0,n=0;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
*/      printf("Enter employee ID");
        scanf("%d",&Emp1.Emp_ID);
        printf("Enter the employee name\n");
        scanf("%s",Emp1.Emp_Name);
  /*  }
    for(i=1;i<=n;i++)
    {*/
        printf("Employee ID is %d\n",Emp1.Emp_ID);
        printf("Employee Name is %s\n",Emp1.Emp_Name);

}
