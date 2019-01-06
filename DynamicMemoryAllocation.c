/*Program for dynamic memory allocation use of malloc() function*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum=0,*ptr,n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Sorry can not assign memory,insufficient memory\n");
    }
    printf("Enter values of n elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+= *(ptr+i);
    }
    printf("Sum of % d numbers is %d \n",n,sum);
}
