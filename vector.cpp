#include<iostream>
#include<math.h>
using namespace std;

class vector
{
	int i,j,k;
	
	public:
		
		vector(int x,int y,int z)
		{
			i=x;j=y;k=z;
		}
		
		vector()
		{
			
		}
		
		void setdata(int x,int y,int z)
		{
			i=x;j=y;k=z;
		}
		
		void display_vector()
		{
			cout<<"("<<i<<")i+("<<j<<")j+("<<k<<")k"<<endl;
		}
		
		vector operator +(vector v1)
		{
			vector temp;
			temp.i=i+v1.i;
			temp.j=j+v1.j;
			temp.k=k+v1.k;
			
			return temp;
		}
	vector operator - (vector v1)
		{
			vector temp;
			temp.i=i-v1.i;
			temp.j=j-v1.j;
			temp.k=k-v1.k;
			
			return temp;
		}
		
		float magnitude_of_vector()
		{
			float mag;
			mag=pow(i,2)+pow(j,2)+pow(k,2);
			mag=sqrt(mag);
			
			return mag;
		}
};

int main()
{
	vector v1,v2(2,-9,7),v3;
	v1.setdata(1,-5,3);
	v1.display_vector();
	v2.display_vector();
	
	v3=v1-v2;
	v3.display_vector();
	
	cout<<v1.magnitude_of_vector();
	
	return 0;
}
