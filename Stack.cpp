#include<iostream>
#include<stdlib.h>
using namespace std;
#define SIZE 5
class Stack
{
    private:
     int top;
     int stack[SIZE];
    public: 
    Stack()
    {
        this->top=-1;
    }
    void push();
    void pop();
    void traverse();
};
void Stack:: push()
{
    if(top==SIZE-1)
    {
        cout<<"Stack is Overflow"<<endl;
    }
    else 
    {
        top++;
        int item;
        cout<<"Enter the value to be inserted "<<endl;
        cin>>item;
        stack[top]=item;
        cout<<"Inserted element is "<<item<<endl;
    }
}
void Stack :: pop()
{
    if(top==-1)
    {
        cout<<"Stack is Empty";
    }
    else 
    {
        int item;
        item=stack[top];
        top--;
        cout<<"The element deleted is "<<item;
    }
}
void Stack::traverse()
{
     if(top==-1)
    {
        cout<<"Stack is Empty";
    }
    else
    {
        cout<<"The elements are:"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<"Element :"<<stack[i];
        }
    }
}
int main()
{
    Stack s;
    int n,choice;
    cout<<"Enter how many times you wanna iterate through the loop\n";
    cin>>n;
     cout<<"Welcome to Stack\n";
    while(n!=0)
    {
       cout<<"Please enter your following choice of option\n";
       cout<<"1-Push 2-Pop 3-Display 4-Exit\n";
       cin>>choice;
       switch(choice)
       {
            case 1:
    s.push();
    break;
    case 2:
    s.pop();
    break;
    case 3:
    s.traverse();
    break;
    case 4:
    exit(1);
    default:
    printf("Please enter proper choice ");
       }
    }
}