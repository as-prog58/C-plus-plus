#include<iostream>
using namespace std;

class Darray
{
	int *array;
	int size;
	int capacity;
	
	public:
		
		Darray()
		{
			array=new int[1];
			size=0;
			capacity=1;
		}
		~Darray()
		{
			delete []array;
			size=0;
			capacity=0;
		}
		void insert(int index,int value)
		{
			if(size==capacity)
			{
				resize();
			}
			
			if(index>=capacity||index<0)
			cout<<"invalid memory location"<<endl;
			
			
			array[index]=value;
			size++;
			
		}
		
		void resize()
		{
			int *temp;
			temp=new int[capacity*2];
			int i;
			for(i=0;i<size;i++)
			{
				temp[i]=array[i];
			}
			delete []array;
			
			array=temp;
			
			capacity=2*capacity;
		}
		
		void PrintArray()
		{
			int i;
			for(i=0;i<size;i++)
			{
				cout<<array[i]<<" ";
			}
			cout<<endl;
		}
		
		int getsize()
		{
			return size;
		}
		
		int getcapacity()
		{
		    return capacity;
		}
		
		void deleteA(int index)
		{
			int i;
			for(i=index;i<size-1;i++)
			{
				array[i]=array[i+1];
			}
			size--;
		}
		
		int search(int value)
		{
			int i;
			for(i=0;i<size;i++)
			{
				if(array[i]==value)
				return i;
			}
			
			return -1;
		}
};

int main()
{
	
	Darray a;
	cout<<"size="<<a.getsize()<<" "<<"capacity="<<a.getcapacity()<<endl;
	
	a.insert(0,10);
	a.insert(1,20);
	a.insert(2,30);
	a.insert(3,40);
	a.insert(4,50);
	a.PrintArray();
	
	cout<<"size="<<a.getsize()<<" "<<"capacity="<<a.getcapacity()<<endl;
	
	a.deleteA(2);
	a.PrintArray();
	cout<<"size="<<a.getsize()<<" "<<"capacity="<<a.getcapacity()<<endl;
	
	int n;
	cout<<"enter element you want to search<<"<<endl;
	cin>>n;
	
	if(a.search(n)==-1)
	cout<<"element not found"<<endl;
	
	else
	cout<<"element "<<n<<" found at index "<<a.search(n)<<endl;
	
	return 0;
}
