#include<stdio.h>

int stack[100], top = -1;

int push(int val);	//Function signature to insert element to stack
int pop();			//Function signature to delete element in stack

int main()
{
	int array[100], n, i, val;
	
	//insert elements and display the array
	printf("Enter the length of array : ");
	scanf("%d", &n);
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter value for array[%d] : ", i);
		scanf("%d", &array[i]);
	}
	
	printf("\narray is : ");
	printf("\t");
	
	for(i=0; i<n; i++)
	{
		printf("\t%d", array[i]);
	}
	
	//push array elements to the stack
	for(i=0; i<n; i++)
	{
		push(array[i]);
	}
	
	//pop stack elements to the array
	for(i=0; i<n; i++)
	{
		val = pop();
		array[i] = val;
	}
	
	//display the reversed array
	printf("\nreversed array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("\t%d", array[i]);
	}
	
	return 0;
}

int push(int val)		//Function to insert element to stack
{
	stack[++top] = val;
}

int pop()				//Function to delete element in stack
{
	return(stack[top--]);	//return the deleted element in stack
}
