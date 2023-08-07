#include<iostream>
using namespace std;

int main()
{
	char ar[6]={1,2,3,4,5,6};
	int i;
	char brr[6];
	cout<<'ar';
	
	for(i=0;i<5;i++)
	{
		brr[i]=i+'ar';
		cout<<'ar'<<" ";
	}
	brr[i]='\0';
	
	cout<<brr;
	return 0;
}
