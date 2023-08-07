#include<iostream>
using namespace std;
class node
{
	public:
		
	int data;
	node *link;
};

void display_linkedlist(node *start)
{
	if(start==NULL)
	cout<<"nothing in list"<<endl;
	else
	{
	
	node *temp=start;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->link;
	 }
   }
}

int main()
{
	 node *head=NULL;
	 head= new node;
	 node *current=head;
	
	int i,n;
	cout<<"ENTER NUMBER OF NODE IN LINKEDLIST:-"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"enter "<<i<<" element of list"<<endl;
		cin>>current->data;
		if(i==n)
		current->link=NULL;
			else
			{
			
	     	current->link=new node;
	         	current=current->link; 
         	}
	}
	
	display_linkedlist(head);
	
	
	
	
}
