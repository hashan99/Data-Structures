#include<stdio.h>

int main()
{
	int n1, n2, array1[n1], array2[n2], array3[n1 + n2], i, j;
	//n3 = n1 +n2;
	
	//insert and display array1
	printf("Insert length of array 1 : ");
	scanf("%d", &n1);
	printf("\n");
	if(n1>0)
	{
		for(i=0; i<n1; i++)
		{
			printf("Enter value for array1[%d] : ", i);
			scanf("%d", &array1[i]);	
		}
		printf("\n\tarray1 : ");
		for(i=0; i<n1; i++)
			printf("\t%d", array1[i]);
		
	}
	else
		printf("Invalid input!");
		
	//insert and display array2
	printf("\n\n");
	printf("Insert length of array 2 : ");
	scanf("%d", &n2);
	printf("\n");
	if(n2>0)
	{
		for(i=0; i<n2; i++)
		{
			printf("Enter value for array2[%d] : ", i);
			scanf("%d", &array2[i]);	
		}
		printf("\n\tarray2 : ");
		for(i=0; i<n2; i++)
			printf("\t%d", array2[i]);
		
	}
	else
		printf("Invalid input!");
	
	//copy array1 to array3
	for(i=0; i<n1; i++)
	{
		array3[i] = array1[i];
	}
	
	//copy array2 to array3
	j = 0;
	for(i=n1; i<n1 + n2; i++)
	{
		array3[i] = array2[j];
		j++;	
	}
	
	//print the merge array
	printf("\n\nmerge array : ");
	printf("\t");
	for(i=0; i<n1 + n2; i++)
		printf("\t%d", array3[i]);
		
	//sort the merge array ascending order
	int temp;
	for(i=0; i<n1 +n2; i++)
	{
		for(j=i+1; j<n1 + n2; j++)
		{
			if(array3[j] < array3[i])
			{
				temp = array3[i];
				array3[i] = array3[j];
				array3[j] = temp;
			}
		}
	}
	
	//print the sorted merge array
	printf("\n\nsorted merge array : ");
	for(i=0; i<n1 + n2; i++)
		printf("\t%d", array3[i]);
	
	return 0;
}
