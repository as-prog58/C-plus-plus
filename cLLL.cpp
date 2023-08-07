#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
	
	public:
		 node()
		 {
		 	data=0;
		 	next=NULL;
		 }
};
int size=0;

class SLL
{
	
	node *head;
	public:
	SLL()
	{
		head=NULL;
	}
	
	void insertAtEnd(int value)
	{
		node *temp=new node;
		temp->data=value;
		
		if(head==NULL)
		{
			head=temp;
			temp->next=temp;
			return;
		}
		
		node *t=head;
		while(t->next!=head)
		{
			t=t->next;
		}
		
		t->next=temp;
		temp->next=head;
		
		size++;
	}
	void insertAtBeg(int value)
	{
		node *temp=new node;
		temp->data=value;
		
		if(head==NULL)
		{
			head=temp;
			temp->next=temp;
			return;
		}
		
		node *t=head;
		while(t->next!=head)
		{
			t=t->next;
		}
		
		temp->next=head;
		head=temp;
		t->next=head;
		
		size++;
	}
	
		void PrintLL()
		{
			node *temp = head;
			
			
			if(head==NULL)
			{
				cout<<"nothing in list"<<endl;
				return;
			 } 
			
			
			
			
              do 
		      {
                cout << temp->data << " ";
                temp = temp->next;
                             
			}while(temp != head);
		   
           
             cout<<endl;
            
            
		}
		
		void deleteAtEnd()
		{
			if(head==NULL)
			{
			  cout<<"No iteam to delete in list"<<endl;
			   
			
	     	}
	     	else if(head->next==head)
	     	{
	     		node*t=head;
	     		head=NULL;
	     		
	     		delete t;
	     		
	     		size--;
			 }
	     	else
	     	{
	     		node *t=head;
	     		node *tt=head;
	     		while(t->next!=head)
	     		{
	     			tt=t;
	     			t=t->next;
				 }
				 
				 tt->next=head;
				 delete t;
				 
				 size--;
				 
				 
				 
			 }
		}
		
		int deleteAtBegin()
		{
			if(head==NULL)
			{
				cout<<"No item to delete in list"<<endl;
			}
			else if(head->next==head)
	     	{
	     		node*t=head;
	     		head=NULL;
	     		
	     		delete t;
	     		size--;
			 }
			
			
			else
			{
				node *t,*tt=head;
				t=head;
				
				while(tt->next!=head) tt=tt->next;
				head=head->next;
				tt->next=head;
				
				delete t;
				size--;
			}
		}
		
		void insertAtMiddle(int index,int value)
		{
			node *temp;
			
			temp=head;
			int count=index-1;
			
			if(index==1)
			  insertAtBeg(value);
			else if(index==size+1)
			  insertAtEnd(value);
			  
			  else
			  {
			  	node *t=new node;
			  	t->data=value;
			  	
			  	while(--count)
			  	{
			  		temp=temp->next;
				  }
				  
				  node *tt;
				  tt=temp->next;
				  temp->next=t;
				  t->next=tt;
				  
				  size++;
			  }
			
			
		
			
			
		}
		
		void deleteFromMid(int value)
		{
			node *temp=head->next;
		
			if(head==NULL)
			{
				cout<<value<<" is not in the list"<<endl;
			}
			else if(head->data==value)
			{
			deleteAtBegin();
			}
			
			else
			{
				
				node *tt=temp;
				
				while(temp!=head)
				{
					if(temp->data==value)
					{
						tt->next=temp->next;
				      delete temp;
				      return;
					}
					tt=temp;
					temp=temp->next;
				}
				
			}
		}
		
};

int menu()
{
	int choice;
	cout<<"enter 1:add number on list at end"<<endl;
	cout<<"enter 2:add number on list at first"<<endl;
		cout<<"enter 3: to delete from last"<<endl;
		cout<<"enter 4:delete number from first"<<endl;
			cout<<"enter 5: to add element at mid"<<endl;
			cout<<"enter 6: to delete number from mid"<<endl;

	cout<<"enter 7: to exit\n";
       cin>>choice;
	return choice;
}

int main()
{
	SLL ll;
	int num;
	while(1)
	{
		system("cls");
		ll.PrintLL();
		
		switch(menu())
		{
			case 1:
				cout<<"enter number to add on list at end:"<<endl;
				cin>>num;
				ll.insertAtEnd(num);
				break;
		
			case 2:
				cout<<" enter number to add on list at first:"<<endl;
				cin>>num;
				ll.insertAtBeg(num);
				break;
			case 3:
				ll.deleteAtEnd();
				break;
			case 4:
				ll.deleteAtBegin();
				break;
			case 5:
				cout<<"enter index & number to add in mid of list"<<endl;
				int i;
				cin>>i>>num;
			     ll.insertAtMiddle(i,num);
				break;
			case 6:
				cout<<"enter number to delete from list"<<endl;
				cin>>num;
				ll.deleteFromMid(num);
				break;
				
		
			case 7:
				exit(0);
				break;
				
			
			default :
			    printf("invalid choice");
		}
		
		
	}
	
	
	return 0;
	
}

