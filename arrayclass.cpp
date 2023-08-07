#include<iostream>
using namespace std;

class Array
{
	int a[100];
	int size;
	
	public:
		
		Array()
		{
			size=0;
		}
		void displayArray()
		{
			int i;
			for(i=0;i<size;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		
		void insert(int index,int value)
		{
			a[index]=value;
			size++;
		}
		
		int search(int value)
		{
			int i;
			for(i=0;i<size;i++)
			{
				if(a[i]==value)
				return i;
			}
			
			return -1;
		}
		
	  void deleteA(int value)
	  {
	  	int index=search(value);
	  	if(index==-1)
	  	cout<<"no match found to delete"<<endl;
	  	
	  	else
	  	{
	  		int i;
	  		for(i=index;i<size-1;i++)
	  		{
	  			a[i]=a[i+1];
			  }
			  a[size-1]=0;
			  size--;
		  }
	  }
	  
	  void direct_insert(int index,int value)
	  {
	  	int i;
	  	for(i=size-1;i>=index;i--)
	  	{
	  		a[i+1]=a[i];
		  }
		  
		  a[index]=value;
		  size++;
	  }
	  
	  int get_size()
	  {
	  	return size;
	  }
};

int main()
{
	Array ar;
	
	int n;
	cout<<"no. of elements in array:-"<<endl;
	cin>>n;
	
	cout<<"enter "<<n<<" elements"<<endl;
	
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		ar.insert(i,t);
	}
	
	ar.displayArray();
	
	int val;
	cout<<"enter number you want to delete"<<endl;
	
	cin>>val;
	
	ar.deleteA(val);
	
	ar.displayArray();
	
	int in,va;
	cout<<"add element"<<endl;
	
	cin>>in>>va;
	ar.direct_insert(in,va);
	ar.displayArray();
	
	
	
	return 0;
}
