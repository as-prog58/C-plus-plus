#include<stdio.h>
#include<stdlib.h>

void print();  
void push();
int pop();

void create_Free_node();

 struct stack
{
	int data;
	struct stack *next;
};

struct stack *head=NULL;
struct stack *top=NULL;

int main()
{
	create_Free_node();
	
	push(10);
	print();
	printf("deleted element is %d\n",pop());
	push(23);
	push(19);
	push(12);
	pop();
	
	print();
	
	return 0;
}

void create_Free_node()
{
	int i,n;
	printf("Enter number of nodes you want to create\n");
	scanf("%d",&n);
	struct stack *temp=NULL;
	
	for(i=0;i<n;i++)
	{
		temp=malloc(sizeof(struct stack));
		temp->data=0;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		
		else
		{
		
			temp->next=head;
			head=temp;
			
		}
	}
}
void push(int m)
{
	if(head==NULL)
	{
		printf("stack overflow\n");
		
	}
	else
	{
		if(top==NULL)
		{
			top=head;
			head=head->next;
			top->next=NULL;
			top->data=m;
		}
		
		else
		{
			struct stack *ptr=NULL;
			ptr=head;
			head=head->next;
			ptr->next=NULL;
			ptr->data=m;
			ptr->next=top;
			top=ptr;
		}
	}
}
int pop()
{
	struct stack *ptr;
	int item;
	
	if(top==NULL)
	{
		printf("stack underflow\n");
	}
	
	else
	{
		item=top->data;
		ptr=top;
		top=top->next;
		ptr->next=head;
		head=ptr;
	}
	
	return item;
}

void print()
{
	struct stack *ptr=top;
	
	if(top==NULL)
	{
		printf("Empty\n");
		return;
	}
	
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	
	printf("\n");
}	
	
	

