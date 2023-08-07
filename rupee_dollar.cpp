#include<iostream>
using namespace std;
class Dollar;
class Rupee
{
    int x;

    public:
    void display()
    {
        cout<<"Rupee is "<<x<<endl;
    }
    
    int getR()
    {
    	return x;
	}

    Rupee(int n)
    {
    	cout<<"PC called"<<endl;
        x=n;
    }
    Rupee()
    {
        cout<<"DC called"<<endl;
    }
    
    operator int()
    {
    	return x;
	}
	
	
};
class Dollar
{
    int x;

    public:
    void display()
    {
        cout<<"Dollar is "<<x<<endl;
    }
     Dollar(int n)
    {
    	cout<<"PC called"<<endl;
        x=n;
    }
    Dollar()
    {
        cout<<"DC called"<<endl;
    }
    
     operator int()
    {
    	return x;
	}
	
	operator Rupee()
	{
		return x*100;
	}
	Dollar(Rupee n)
	{
		x=n.getR()/100;
	}
	
	
};

int main()
{
    Rupee r=500;
   Dollar d;
   
      d=(Dollar)r;
      
      d.display();
      
      
   
}
