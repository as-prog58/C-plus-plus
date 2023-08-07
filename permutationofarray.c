#include<stdio.h>

void per(int p[],int n)
{
	int i;
	if(n==0)
	return;

	printf("%d ",*p);
	per(p+1,n-1);
	
	for(i=1;i<n;i++)
	printf("%d ",p[i]);
	
	printf("\n");
}


int main()
{
	int arr[]={1,2,3};
	int i,j,k;
	
	
	int len=sizeof(arr)/sizeof(arr[0]);
	int p[len];
	for(i=0;i<len;i++)
	p[i]=arr[i];
	
	for(i=0;i<len;i++)
	{
		
	}
	
	
	
	
	return 0;
}
