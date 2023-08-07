#include<iostream>
using namespace std;

class A
{
	protected:
	int a,b;
	public:
		A(int x,int y)
		{
		  a=x;
		  b=y;	
		}
};

class B:public A
{
	int c;
	public:
	B(int x,int y,int z):A(x,y)
	{
		c=z;
	}
	
	void display()
	{
		cout<<a<<b<<c<<endl;
	}
};

int main()
{
	B b1(1,2,3);
	A a1(4,5);
	b1.display();
	cout<<sizeof(a1);	
	return 0;
}
