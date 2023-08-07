#include<iostream>
#include<cstdlib>
#include<conio.h>


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

class singlyLinkedList
{
	node *head;
	
	public:
		
		singlyLinkedList()
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
			}
			else
			{
				node *t=head;
				while(t->next!=NULL)
				{
					t=t->next;
				}
				t->next=temp;
				
			}
		}
		
		void insertAtBegin(int value)
		{
			node *temp=new node;
			temp->data=value;
			
		
			
			
				temp->next=head;
				head=temp;
			
		}
		void deleteAtEnd()
		{
			if(head==NULL)
			{
			  cout<<"No iteam to delete in list"<<endl;
			   
			
	     	}
	     	else if(head->next==NULL)
	     	{
	     		node*t=head;
	     		head=NULL;
	     		
	     		delete t;
			 }
	     	else
	     	{
	     		node *t=head;
	     		node *tt=head;
	     		while(t->next!=NULL)
	     		{
	     			tt=t;
	     			t=t->next;
				 }
				 
				 tt->next=NULL;
				 delete t;
				 
				 
				 
			 }
		}
		int deleteAtBegin()
		{
			if(head==NULL)
			{
				cout<<"No item to delete in list"<<endl;
			}
			
			else
			{
				node *t;
				t=head;
				head=head->next;
				
				delete t;
			}
		}
		int search(int value)
		{
			node *temp=head;
			int count=0;
			
			if(head==NULL)
			{
				return -1;
			}
			
			while(temp!=NULL)
			{
				count++;
				if(temp->data==value)
				{
					return count;
				}
				
				temp=temp->next;
				
				
			}
			return -1;
		}
		
		void insertAtMiddle(int index,int value)
		{
			node *temp;
			
			temp=head;
			int count=index-1;
			
			if(index==1)
			  insertAtBegin(value);
			else if(index==size()+1)
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
			  }
			
			
		
			
			
		}
		
		void deleteFromMid(int value)
		{
			node *temp=head;
		
			if(head==NULL)
			{
				cout<<value<<" is not in the list"<<endl;
			}
			else if(head->data==value)
			{
				head=head->next;
				delete temp;
			}
			
			else
			{
				
				node *tt=head;
				
				while(temp!=NULL)
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
		void PrintLL()
		{
			node *t = head;
            while(t != NULL)
            {
                cout<<t->data<<" ";
                t = t->next;
            }
            cout<<endl;
            
            cout<<"size="<<size()<<endl;
		}
		
		int size()
		{
			node *temp=head;
			int count=0;
			while(temp!=NULL)
			{
				count++;
				temp=temp->next;
			}
			
			return count;
			
		}
		
		void reverseLL()
		{
			
			if(head==NULL||head->next==NULL)
			{
				return;
			}
			
			else      
		      {
		         node *temp1,*temp2;
			     temp1=NULL;
			     temp2=NULL;
			     
			     while(head!=NULL)
			     {
			     	temp2=head->next;
					 head->next=temp1;
			     	 temp1=head;
			     	 head=temp2;
				 }
				 head=temp1;
			  }  
		        
				
		}
		
		void sortLL()
		{
			int t;
			node *temp=head;
			int n=size();
			while(n--)
			{
				temp=head;
				while(temp->next!=NULL)
				{
					if((temp->data ) > (temp->next->data))
					{
						t=temp->data;
						temp->data=temp->next->data;
						temp->next->data=t;
					}
					temp=temp->next;
				}
			}
		}
		
		
		void deleteDuplicateIfSorted()
		{
			
			if(head==NULL||head->next==NULL)
			return;
			
			else
			{
				node *temp=head;
				node *t=head;
				
				while(temp->next!=NULL)
				{
					t=temp;
					if(t->data==t->next->data)
					{
						temp=temp->next;
						deleteFromMid(t->data);
					}
					else
					temp=temp->next;
				}
			}
		}
		
		void deleteDuplicate()
		{
	             	    
		}
	 	
		void insertInSortedList(int value)
		{
			if(head==NULL)
			{
				insertAtBegin(value);
				return;
			}
			
			node *temp=head;
			node *t=NULL;
				
				int count=0;
				
				while(temp!=NULL)
				{
					count++;
					if(temp->data>=value)
					{
						break;
					}
					
					temp=temp->next;
				}
				
				if(temp==NULL)
				insertAtEnd(value);
				else
				
				insertAtMiddle(count,value);
		}
		
	
		
	
	
};
int menu()
{
	int choice;
	cout<<"enter 1:add number on list at end"<<endl;
	cout<<"enter 2:add number on list at first"<<endl;
	cout<<"enter 3:delete number from first"<<endl;
	cout<<"enter 4: to delete from last"<<endl;
	cout<<"enter 5: to add element at mid"<<endl;
	cout<<"enter 6: to delete number from mid"<<endl;
	cout<<"enter 7: to search element in list"<<endl;
	cout<<"enter 8: to reverese the Linked list"<<endl;
	cout<<"enter 9: to Sort the linkedlist"<<endl;
	cout<<"enter 10 to  delete the duplicate in sorted linkedlist"<<endl;
	cout<<"enter 11 to insert element in sorted LinkedList"<<endl;
	cout<<"enter 12: to exit\n";
       cin>>choice;
	return choice;
}

int main()
{
	singlyLinkedList ll;
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
			case 3:
				ll.deleteAtBegin();
				break;
			case 2:
				cout<<" enter number to add on list at first:"<<endl;
				cin>>num;
				ll.insertAtBegin(num);
				break;
				
			case 4:
				ll.deleteAtEnd();
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
				cout<<"enter number to search in list"<<endl;
				cin>>num;
				int c;
				c=ll.search(num);
				if(c==-1)
				cout<<"element not found"<<endl;
				else
				cout<<"element "<<num<<" is found at index "<<c<<endl;
				
				getch();
				
				break;
			case 8:
			     ll.reverseLL();
				 break;	
				 
		    case 9:
		    	ll.sortLL();
		    	break;
		    	
		    case 10:
		    	ll.deleteDuplicateIfSorted();
		    	break;
		    	
		    case 11:
		    	cout<<"enter number to insert in sorted list"<<endl;
		    	cin>>num;
		    	ll.insertInSortedList(num);
		    	break;
		    		
			case 12:
				exit(0);
				break;
				
			
			default :
			    printf("invalid choice");
		}
		
		
	}
	
	
	return 0;
	
}

