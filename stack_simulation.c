//Push and Pop operations on Stack (using Array)

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void push(int);
void pop();
void display();
void peek();
int isFull();
int isEmpty();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   while(1)
   {
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	        case 1: 
	            printf("Enter the value to be insert: ");
		        scanf("%d",&value);
		        push(value);
		        break;
	        case 2: 
	            pop();
		        break;
	        case 3: 
	            display();
		        break;
	        case 4: 
	            peek();
		        break;
	        case 5: 
	            exit(0);
	            break;
	        default: 
	            printf("\nWrong selection!!! Try again!!!");
	            break;
      }
   }
}

int isFull()
{
   return (top == SIZE - 1);
}

int isEmpty()
{
   return (top == -1);
}

void push(int value)
{
   if(isFull())
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else
   {
      stack[++top] = value;
      printf("\nInsertion success!!!");
   }
}

void pop()
{
   if(isEmpty())
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else
      printf("\nDeleted : %d", stack[top--]);
}

void peek()
{
   if(isEmpty())
      printf("\nStack is Empty!!!");
   else
      printf("\nTop element is: %d", stack[top]);
}

void display()
{
   if(isEmpty())
      printf("\nStack is Empty!!!");
   else
   {
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	    printf("%d\n",stack[i]);
   }
}