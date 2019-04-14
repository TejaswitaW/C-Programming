/*Use of structure pointer*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
  struct st
  {
      int  roll_num;
      char name[50];
  }list[3];
  struct st *p=NULL;
  p=list;
  printf("Enter roll number and name of 3 students\n");
  for(i=0;i<3;i++)
  {
      scanf("%d %s",&p->roll_num,p->name);
      p++;
  }
  printf("The students information you have entered is as follows\n");
  p=list;
  for(i=0;i<3;i++)
  {
      printf("Roll number of the student is %d\n",p->roll_num);
      printf("Name of the student is %s\n",p->name);
      p++;

  }
}
