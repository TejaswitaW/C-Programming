/*use of union*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    union emp{
    int emp_ID;
    char emp_Name[50];
    float sal;
    }e1;
    printf("Enter employee ID\n");
    scanf("%d",&e1.emp_ID);
    printf("Enter employee name\n");
    scanf("%s",e1.emp_Name);
    printf("Enter employee salary\n");
    scanf("%f",&e1.sal);

    printf("You have entered following information\n");
    printf("Employee ID is %d\n",e1.emp_ID);
    printf("Employee name is %s\n",e1.emp_Name);
    printf("Employee salary is %f\n",e1.sal);

}
