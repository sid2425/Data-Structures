#include<stdio.h>
#define SIZE 5
int front=-1;
int rear=-1;
int queue[SIZE];
void dequeue();
void enqueue();
void display();
void main()
{
int n,choice;
printf("Welcome to The Queue Operation\n");
printf("Enter the no of times you wanna use Stack operations");
scanf("%d",&n);
while(n!=0)
{
printf("Please provide your choice of option\n");
printf("1-Enqueue 2-Dequeue 3-Display\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    enqueue();
    break;
    case 2:
    dequeue();
    break;
    case 3:
    display();
    break;
    default:
    printf("Please enter proper choice ");
}
n--;
}
}
void enqueue()
{
    if(rear==SIZE-1)
    {
        printf("Queue is Full \n");
    }
    else 
    {
        printf("Enter the element you wanna insert into Queue\n");
        int item;
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
        printf("The element inserted is %d",item);
    }
}
void dequeue()
{
if(front==rear)
{
printf("Queue is Empty");
}
else
{
    front++;
    int x = queue[front];
    printf("The deleted element from queue is %d\n",x);
}
}
void display()
{
    if(front==rear)
    {
        printf("Queue is Empty");
    }
    else 
    {
        int i;
        for(i=front+1;i<=rear;i++)
        {
            printf("Element is %d\n",queue[i]);
        }
    }
}
