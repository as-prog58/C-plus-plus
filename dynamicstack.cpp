#include<iostream>
using namespace std;

class Dstk
{
	int *stk;
	int top;
	int capacity;
	
	public:
		
		Dstk()
		{
			stk=new int[1];
			top=-1;
			capacity=1;
		}
		~Dstk()
		{
		   delete []stk;
		   top=-1;
		   capacity=0;	
		}
		
		void push(int value)
		{
			if((top+1)==capacity)
			{
				resize();
			}
			stk[++top]=value;
		}
		
		int isStackEmpty()
		{
			if(top==-1)
			return 1;
			else
			return 0;
		}
		void resize()
		{
			int *temp;
			temp=new int[capacity*2];
			int i;
			for(i=0;i<=top;i++)
			{
				temp[i]=stk[i];
			}
			delete []stk;
			
			stk=temp;
			
			capacity=2*capacity;
		}
		
		void resizeless()
		{
			int *temp;
			temp=new int[capacity/2];
			int i;
			for(i=0;i<=top;i++)
			{
				temp[i]=stk[i];
			}
			delete []stk;
			
			stk=temp;
			
			capacity=capacity/2;
		}
		
		int pop()
		{
			if(isStackEmpty())
			{
				cout<<"stack underflow"<<endl;
				return -1;
			}
			
			top--;
			
			if(top<(capacity/2))
              {
              	resizeless();
			  }			
		}
		
	void PrintStk()
	{
		int i;
		for(i=0;i<=top;i++)
		cout<<stk[i]<<" ";
		
		cout<<endl;
	}
	int topA()
    {
    	if(isStackEmpty())
    	  cout<<"stack underflow"<<endl;
    	  
    	  else
    	  return stk[top];
	}
	int size()
	{
		return top+1;
	}
};

int main()
{
	
	Dstk s1;
	s1.push(12);
	s1.PrintStk();
	
	s1.push(13);
	s1.push(89);
	s1.push(67);
	s1.PrintStk();
	
	s1.pop();
	s1.PrintStk();
	cout<<"size="<<s1.size()<<endl;
	cout<<"Top element="<<s1.topA()<<endl;
	return 0;
}
