#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *link;
}*first=NULL,*last=NULL;
//count 
void count(struct Node *p)
{
    int count=0;
        while (p!=NULL)
        {
            count++;
            p=p->link;
        }
        printf("Total count of Nodes is %d",count);
        
    }
//creation of linked list
void create()
{
    int n,i;
    printf("Please enter no of nodes\n");
    scanf("%d",&n);
    struct Node *t;
    first=(struct Node *)malloc(sizeof(struct Node));
    printf("Please Enter The value to be inserted into linked list\n");
    scanf("%d",&first->data);
    first->link=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter the element to be inserted\n");
        scanf("%d",&t->data);
        t->link=NULL;
        last->link=t;
        last=t;

    }
}
//Traversing 
void display(struct Node *p)
{
if(p==NULL)
{
    printf("Linked List is Empty\n");
}
else 
{
    while(p!=NULL)
    {
        printf("\nElement is %d\n",p->data);
        p=p->link;
    }
    printf("\n");
}
}
//insertions
void insert(int pos,struct Node *p)
{
int i;
struct Node *temp;
if(pos<0)
{
    printf("Please Enter choice of position in +ve values only\n");
}
else if(pos==0)
{
temp=(struct Node *)malloc(sizeof(struct Node));
printf("Please enter value of Element to be inserted\n");
scanf("%d",&temp->data);
temp->link=first;
first=temp;
}
else if(pos>0)
{

p=first;
for(i=0;i<pos-1 && p!=NULL;i++)
{
p=p->link;
}
if(p)
{
temp=(struct Node *)malloc(sizeof(struct Node));
printf("Please enter value of Element to be inserted\n");
scanf("%d",&temp->data);
temp->link=p->link;
p->link=temp;
}
else 
{
printf("The index you provided is invalid");
}
}
}
void insertAtLast()
{
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Please the data to be inserted at Last is ");
    scanf("%d",&temp->data);
    printf("\n");
    temp->link=NULL;
    if(first==NULL)
    {
        first=last=temp;
    }
    else 
    {
        last->link=temp;
        last=temp;
    }
}
void delete(int pos)
{
    struct Node *p,*q;
    int x=-1,i;
    if(pos==0)
    {
        p=first;
        first=first->link;
        x=p->data;
        printf("The element deleted is %d\n",x);
        free(p);
    }
    else if(pos>0)
    {
        p=first;
        q=NULL;
        for(i=0;i<pos-1&&p!=NULL;i++)
        {
            q=p;
            p=p->link;
        }
        if(p)
        {
            q->link=p->link;
            x=p->data;
             printf("The element deleted is %d\n",x);
            free(p);
        }
        else 
        {
            printf("The index you provided is invalid");
        }
    }
}
void main()
{
int i=10,choice,pos;
printf("Welcome to The Linked List Operation\n");
while(i!=0)
{
printf("Please provide your choice of option\n");
printf("1-Creation 2-Insertion 3-Insertion At End 4-Deletion 5-Display 6-Count 7-Exit\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    create();
    break;
    case 2:
    printf("Please Enter the postion to insert the element\n");
    scanf("%d",&pos);
    insert(pos,first);
    break;
    case 3:
    insertAtLast();
    break;
    case 4:
    printf("Please Enter the postion to insert the element\n");
    scanf("%d",&pos);
    delete(pos);
    break;
    case 5:
    display(first);
    break;
    case 6:
    count(first);
    break;
    case 7:
    exit(1);
    default:
    printf("Please enter proper choice ");
}
i--;
}
}