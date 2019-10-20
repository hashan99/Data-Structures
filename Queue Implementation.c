#include<stdio.h>


#define max 100

int queue[max], front=-1, rear=-1;

int enqueue(int val);	//Function signature to insert a element in queue
int dequeue();			//Function signature to delete a element in a queue
int peek();				//Function signature to display first element in a queue
int display();			//Function signature to display a queue

int main()
{
	int option, val;
	
	do
	{
		printf("\n\n*******MAIN MENU*******");
		printf("\n\n 1. ENQUEUE");
		printf("\n 2. DEQUEUE");		
		printf("\n 3. PEEK");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n\n Enter your option : ");;
		scanf("%d", &option);
		switch(option)
		{
			case 1:
					printf("\n Enter the number to be insert on queue : ");;
					scanf("%d", &val);
					enqueue(val);
				break;
			
			case 2:
					val = dequeue();
					if(val != -1)
						printf("\n The value deleted from queue is : %d", val);
				break;
				
			case 3:
					val = peek();
					if(val != -1)
						printf("\n The first value in queue is : %d", val);
				break;
				
			case 4:
					display();
				break;
				
			/*default :
					printf("\n\t Invalid option!");*/
				
		
		}
		
	}while(option!=5);
	
	return 0;
}

int enqueue(int val)	//Function to insert a element in queue	
{
	if(rear == max-1)
		printf("\n\t Queue Overflow!");
		
	else if(front == -1 && rear == -1)
		front = rear = 0;
		
	else
		rear = rear +1;
		
	queue[rear] = val;
}

int dequeue()	//Function to delete a element in a queue
{
	int val;
	if(front == -1 || front > rear)
	{
		printf("\n\t Queue Underflow!");
		return -1;
	}
		
	else
	{
		val = queue[front];
		front++;
		if(front > rear)
			front = rear = -1;
		return val;
	}
}

int peek()		//Function to display first element in a queue
{
	if(front == -1 || front > rear)
	{
		printf("\n\t Queue is Empty!");
		return -1;
	}
	else
	{
		return(queue[front]);
	}
		
}

int display()	//Function to display a queue
{
	int i;
	printf("\n");
	if(front == -1 || front > rear )
		printf("\n\t Queue is Empty!");
	else
	{
		for(i=front; i<=rear; i++)
			printf("\t %d", queue[i]);
	}
}
