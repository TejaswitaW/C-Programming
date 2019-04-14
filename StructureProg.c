/*Practice programs in Structure*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
  struct st
  {
      int  roll_num;
      char name[50];
  }list[5];
  printf("Enter roll number and name of 5 students\n");
  for(i=0;i<5;i++)
  {
      scanf("%d %s",&list[i].roll_num,list[i].name);
  }
  printf("The students information you have entered is as follows\n");
  for(i=0;i<5;i++)
  {
      printf("Roll number of the student is %d\n",list[i].roll_num);
      printf("Name of the student is %s\n",list[i].name);
  }
}
