#include<iostream>
using namespace std;

template<class T, class T1 ,class T2>
T add(T1 a, T2 b)
{
	return a+b;
}


int main()
{
	int x,y;
	float s,g;
	s=18.5;
	g=9.1;
	x=10;
	y=12;
	
	int c;
	c=add<int,int,int>(x,y);
	
	cout<<add<float,float,int>(s,x)<<endl;
	
	cout<<c;
}
