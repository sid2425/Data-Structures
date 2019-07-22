#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *link;
}*start=NULL;
void insert(int pos,struct Node *p)
{
    struct Node *temp;
    if(pos==0)
    {
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Insert into Linked List\n");
    scanf("%d",&temp->data);
    temp->link=start;
    start=temp;
    printf("Inserted\n");
    }
    else if(pos>0)
    {
    int i;
    
    p=start;
    for(i=0;i<pos-1 && p!=NULL;i++)
     p=p->link;
    if(p)
    {
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Insert into Linked List\n");
    scanf("%d",&temp->data);
    temp->link=p->link;
    p->link=temp;
    printf("Inserted\n");

    }
    }
}
void display(struct Node *p)
{
 if(p==NULL)
 {
     printf("Linked List is Empty\n");
 }
 else{
printf("The Elements in the list are:\n");
 while(p!=NULL)
 {
 printf("%d \n",p->data);
 p=p->link;
 }
}
}
void main()
{
  display(start);
  insert(0,start);
  insert(1,start);
  insert(2,start);
  display(start);
  insert(3,start);
  insert(4,start);
  display(start);
}
