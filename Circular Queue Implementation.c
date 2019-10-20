#include<stdio.h>

#define max 6

int CQ[max], front = 0, rear = 0, count = 0;

int insertCQ();
int deleteCQ();
int displayCQ();

int main()
{
	int option;
	
	do
	{
		printf("\n\t -------------------------------------");
		printf("\n\n\t Circular Queue operations using Array");
		printf("\n\t -------------------------------------");
		printf("\n\n 1. INSERT");
		printf("\n 2. DELETE");
		printf("\n 3. DISPLAY");
		printf("\n 4. EXIT");
		printf("\n\n Enter your option : ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:
					insertCQ();
				break;
				
			case 2:
					deleteCQ();
				break;
				
			case 3:
					displayCQ();
				break;
		}
	}while(option!=4);
	
	return 0;
}

int insertCQ()
{
	int val;
	if(count == max)
	{
		printf("\n\t\t Circular Queue is Full!");
	}
	else
	{
		printf("\n Enter the number to be insert on Circular Queue : ");
		scanf("%d", &val);
		CQ[rear] = val;
		rear = (rear + 1) % max;
		count ++;
		printf("\n\t\t Insert Succesfull!");
	}
}

int deleteCQ()
{
	if(count == 0)
	{
		printf("\n\t\t Circular Queue is Empty!");
	}
	else
	{
		printf("\n Deleted element from Circular Queue is : %d\n", CQ[front]);
		front = (front + 1) % max;
		count --;
	}
}

int displayCQ()
{
	int i, j;
	if(count == 0)
	{
		printf("\n\t\t Circular Queue is Empty!");
	}
	else
	{
		printf("\n Elements in Circular Queue are : ");
		j = count;
		printf("\n\n");
		for(i = front; j!=0; j--)
		{
			printf("\t %d", CQ[i]);
			i = (i + 1) % max;
		}
	}
}
