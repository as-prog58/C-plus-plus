#include<iostream>
using namespace std;

class Stk
{
    int a[100];
    int top;

    public:

    Stk()
    {
        top=-1;
    }
    ~Stk()
    {
        top=-1;
    }
    void push(int value)
    {
        if(isStackFull())
        {
        cout<<"Stack is full"<<endl;
        return;
        }
        a[++top]=value;

    }
    int isStackFull()
    {
    	if(top==99)
    	   return 1;
    	else
    	  return 0;
	}
	int isStackEmpty()
    {
    	if(top==-1)
    	   return 1;
    	else
    	  return 0;
	}

    int pop()
    {
         if(top<0)
         {
         	cout<<"nothing to delete in stack"<<endl;
         	
		 }
		 else
		 {
		 	top--;
		 	return a[top+1];
		 }
    }
    int topA()
    {
    	if(isStackEmpty())
    	  cout<<"stack underflow"<<endl;
    	  
    	  else
    	  return a[top];
	}
	
	int size()
	{
		return top+1;
	}
	
	void PrintStk()
	{
		int i;
		for(i=0;i<=top;i++)
		cout<<a[i]<<" ";
		
		cout<<endl;
	}

};

int main()
{
	Stk s1;
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
