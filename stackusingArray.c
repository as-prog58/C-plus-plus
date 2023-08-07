#include<stdio.h>
#include<stdlib.h>
#define max_size 100

void push();
int pop();
void print_stack();

int stack[max_size];
int top=-1;

int main()
{
	int choice;
	char ch;
	

	
	while(1)
	{
		system("cls");
		print_stack();
		
		printf("Enter choice\n");
		printf("1 for Push\n");
		printf("2 for pop\n");
		printf("3 for exit\n");
		
		
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				printf("\n delete item is %d",pop());
				break;
				
				
				
			case 3:
				exit(0);
				
			default:
					
					printf(" invalid choice\n");
		}
	
		
	}
}

void push()
{
	if(top==max_size-1)
	{
		printf("stack overflow\n");
		return;
	}
	int item;
	printf("enter number to insert in stack\n");
	scanf("%d",&item);
	
	top++;
	stack[top]=item;
}

int pop()
{
	if(top==-1)
	{
		printf("stack underflow\n");
		return -1;
	}
	
	return stack[top--];
}

void print_stack()
{
	if(top==-1)
	{
		printf("stack underflow\n");
		return ;
	}
	
	int i;
	printf("stack elements are:-\n");
	for(i=top;i>=0;i--)
	printf("%d ",stack[i]);
	
	printf("\n");
}

void delete_middle()
{
	
}
