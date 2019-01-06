/*Singly linked list*/
#include<stdio.h>
#include<stdlib.h>
void start();
void disp();
struct node
    {
    int data;
    struct node *next;
    };
    struct node *head;
int main()
{

    start();
    disp();
}
void start()
{
    int item;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("Memory can not be allocated because of OVERFLOW\n");
    }
    else
    {
        printf("Enter the data\n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
    }
}
void disp()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("There is no any data in linked list\n");
    }
    else
    {
        printf("The data in linked list is %d\n",ptr->data);
    }

}
