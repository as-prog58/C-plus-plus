#include<iostream>
using namespace std;

class node
{
	public:
		
	int data;
	node *prev;
	node *next;
	
	node()
	{
		data=0;
		prev=NULL;
		next=NULL;
	}
};
class DLL
{
	node *head;
	
	public:
	
	DLL()
	{
		head=NULL;
	}
	void PrintDLL()
		{
			node *t = head;
            while(t != NULL)
            {
                cout<<t->data<<" ";
                t = t->next;
            }
            cout<<endl;
            
           // cout<<"size="<<size()<<endl;
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
			node *n=head;
		//	node *p=head;
			while(n->next!=NULL)
			{
			    //p=n;
				n=n->next;	
			}
			n->next=temp;
			temp->prev=n;
			
		}
		
	}
	
	insertAtBegin(int value)
	{
		node *temp=new node;
		temp->data=value;
		if(head==NULL)
		{
			head=temp;
		}
		
		else
		{
			temp->next=head;
			head->prev=temp;
			head=temp;
		}
	}
	
	void deleteAtBegin()
	{
		if(head==NULL)
		cout<<"Nothing to delete in list"<<endl;
		else
		{
			node *temp=head;
			head=head->next;
			head->prev=NULL;
			delete temp;
			
		}
	}
	void deleteAtEnd()
	{
		if(head==NULL)
		cout<<"Nothing to delete in list"<<endl;
		else if(head->next==NULL)
		{
			node *temp=head;
			head=NULL;
			delete temp;
		}
		else
		{
			node *temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->prev->next=NULL;
				delete temp;
		}
	}
	void insertAtMiddle(int value,int pos)
	{
		if(pos==1)
		{
			insertAtBegin(value);
			
		}
	   else if(pos==size())
		{
			insertAtEnd(value);
		}
		else
		{
			node *temp=new node;
			temp->data=value;
			node *t=head;
			node *tt=head;
			while(--pos)
			{
				tt=t;
				t=t->next;
			}
			temp->prev=tt;
			temp->next=t;
			tt->next=temp;
			t->prev=temp;
		}
		
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
	void reverseDLL()
	{
	    
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
	cout<<"enter 10: to exit\n";
       cin>>choice;
	return choice;
}



int main()
{
	 DLL ll;
	int num;
	while(1)
	{
		system("cls");
		ll.PrintDLL();
		
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
		/*	case 6:
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
		    	break;*/
			case 10:
				exit(0);
				break;
				
			
			default :
			    printf("invalid choice");
		}
		
		
	}
	
	
	return 0;
	
}

