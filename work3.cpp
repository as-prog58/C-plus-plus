#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	 int n;
	 cin>>n;
	    char b[n];
	    cin>>b;
	    int i,dec=0,count=0;
	    for(i=n-1;i>=0;i--)
	    {
	        if(b[i]=='1')
	        dec+=pow(2,count);
	        
	        count++;
	        
	    }
	    
	    cout<<dec;
}
