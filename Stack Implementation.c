#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 5

int stack[max], top = -1;

int push(int stack[], int val);		//Function signature to insert element to a stack
int pop(int stack[]);				//Function signature to delete element in a stack
int peek(int stack[]);				//Function signature to display top most element in a stack
int display(int stack[]);			//Function signature to display a stack

int main()
{
	/*int max;
	printf("Enter the size of the stack : ");
	scanf("%d", &max);
	printf("\n");*/
	
	int option, val;
	do
	{
		printf("\n\n*******MAIN MENU*******");
		printf("\n\n 1. PUSH");
		printf("\n 2. POP");
		printf("\n 3. PEEK");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n\n Enter your option : ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
					printf("\n Enter the number to be pushed on stack : ");
					scanf("%d", &val);
					push(stack, val);
				break;
					
			case 2:
					val = pop(stack);
					if(val != -1)
						printf("\n The value deleted from stack is : %d\n", val);
				break;
					
			case 3:
					val = peek(stack);
					if(val != -1)
						printf("\n The value stored at top of stack is : %d\n", val);
				break;
			
			case 4:
					display(stack)	;
				break;
			
			//default:
					printf("\n\tInvalid option!");
					
		}
	}while(option!=5);
	
	return 0;
}

int push(int stack[], int val)	//Function to insert element to a stack
{
	if(top == max-1)
		printf("\n\t Stack Overflow!\n");
	else
	{
		top++;
		stack[top] = val;
	}
}

int pop(int stack[])	//Function to delete element in a stack	
{
	int val;
	if(top == -1)
	{
		printf("\n\t Stack Underflow!\n");
		return -1;
	}
	else
	{
		val = stack[top];
		top--;
		return val;
	}
}

int display(int stack[])	//Function to display a stack
{
	int i;
	if(top == -1)
		printf("\n\t Stack is Empty!\n");
	else
	{
		for(i=top; i>=0; i--)
			printf("\n\t%d", stack[i]);
		printf("\n");
	}
}

int peek(int stack[])	//Function to display top most element in a stack
{
	if(top == -1)
	{
		printf("\n\t Stack is Empty!\n");
		return -1;
	}
	else
	{
		return(stack[top]);
	}
}
