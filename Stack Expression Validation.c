#include<stdio.h>
#include<string.h>

#define max 20
int stack[max], top = -1;

char push(char c);
char pop();

int main()
{
	char exp[max], temp;
	int i, flag = 1;
	printf("Enter an expression : ");
	gets(exp);
	
	for(i=0; i<strlen(exp); i++)
	{
		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{' )
			push(exp[i]);
		if(exp[i]==')' || exp[i]==']' || exp[i]=='}' )
			if(top==-1)
				flag=0;
			else
			{
				temp=pop();
				if(exp[i]==')' && (temp=='{' || temp=='['))
					flag=0;
				if(exp[i]=='}' && (temp=='(' || temp=='['))
					flag=0;
				if(exp[i]==']' && (temp=='(' || temp=='{'))
					flag=0;
			}
	}
	
	if(top>=0)
		flag=0;
	
	if(flag==1)
		printf("\n\t***** Valid Expression *****");
	else
		printf("\n\t***** Invalid Expression *****");
		
	return 0;
}

char push(char c)
{
	if(top==max-1)
		printf("\n\tStack is Overflow!");
	else
	{
		top++;
		stack[top]=c;
	}
}

char pop()
{
	if(top==-1)
		printf("\n\tStack is Underflow!");	
	else
		return(stack[top--]);
}
