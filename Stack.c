#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top=-1;
int stack[SIZE];
void push();
void pop();
void traverse();
void main()
{
int n,choice;
printf("Enter the no of times you wanna use Stack operations");
scanf("%d",&n);
printf("Welcome to The STACK Operation\n");
while(n!=0)
{
printf("Please provide your choice of option\n");
printf("1-Push 2-Pop 3-Display 4-Exit\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    push();
    break;
    case 2:
    pop();
    break;
    case 3:
    traverse();
    break;
    case 4:
    exit(1);
    default:
    printf("Please enter proper choice ");
}
n--;
}
}
void push()
{
if(top==SIZE-1)
{
    printf("Stack is Full\n");
}
else 
{
    int item;
    printf("Enter The element to be inserted");
    scanf("%d",&item);
    top++;
    stack[top]=item;
    printf("The element inserted into the stack is %d\n",item);
}
}
void pop()
{
    int x;
    if(top==-1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        x=stack[top];
        top--;
        printf("The deleted element is %d\n",x);
    }
}
void traverse()
{
int i;
if(top==-1)
{
    printf("Stack is Empty\n");
}
else 
{
    for(i=top;i>=0;i--)
    {
    printf("Element is %d\n",stack[i]);
    }
}
}