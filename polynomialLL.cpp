#include<iostream>
using namespace std;

class node
{
	public:
		
	int co;
	int po;
	node *next;
	
	node()
	{
		co=0;
		po=0;
		next=NULL;
	}
	
};

class linkedList
{
	node *head;
	
	public:
		
		linkedList()
		{
			head=NULL;
		}
		
		void input()
		{
			int n;
			cout<<"Enter number of term in your expression\n";
			cin>>n;
			
			int i,c,p;
			for(i=1;i<=n;i++)
			{
				cout<<"enter coefficient of "<< i <<" term"<<endl;
				cin>>c;
				cout<<"enter power of "<<i<<" term"<<endl;
				cin>>p;
				
				node *temp=new node;
			temp->co=c;
			temp->po=p;
			
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
			
		
		}
		void insertAtEnd(int c,int p)
		{
			node *temp=new node;
			temp->co=c;
			temp->po=p;
			
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
		void printLL()
		{
			node *temp;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->co<<"x^"<<temp->po<<"+";
				temp=temp->next;
			}
			cout<<endl;
		}
		
		linkedList sum(linkedList s)
		{
			linkedList p;
			int cc,pp;
			node *t1,*t2;
			t1=head;
			t2=s.head;
			
			while(t1!=NULL)
			{
				cc=t1->co+t2->co;
				pp=t1->po;
				p.insertAtEnd(cc,pp);
				t1=t1->next;
				t2=t2->next;
			}
			
			return p;
		}
		
};

int main()
{
	linkedList a;
	linkedList b;
	linkedList result;
	
	a.input();
	a.printLL();
	b.input();
	b.printLL();
	
	result=a.sum(b);
	cout<<"sum is"<<endl;
	
	result.printLL();
	
	
	
	return 0;
}
