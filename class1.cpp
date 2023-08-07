#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
	int roll;
	char name[20];
	public:
		 void setData(int x,char p[20])
		{
		  	roll=x;
		  	strcpy(name,p);
		}
		void displayData()
		{
			cout<<"\nROLLNO.="<<roll<<" NAME="<<name;
		}
	 
};
class complex
{
	int a,b;
	public:
	void set(int x,int y);
	 void display();
	 complex add(complex m)
	 {
	 	complex temp;
	 	temp.a=a+m.a;
	 	temp.b=b+m.b;
	 	return temp;
	 }
};
void complex:: set(int x,int y)
{
	a=x;b=y;
}
void complex:: display()
{
	cout<<"\ncomplex number is "<<a<<"+"<<b<<"i";
}
int main()
{
	student a1,a2;
	a1.setData(21558,"ASHISH GUPTA");
	a1.displayData();
	complex b1,b2,b3;
	b1.set(3,4);
	b1.display();
	b2.set(5,6);
	b2.display();	
     b3=b1.add(b2);
	 b3.display();	
	
	
	return 0;
}
