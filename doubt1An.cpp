#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void reverse(int arr[],int n)
{
	int temp;
	for(int i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
}

void Bubblesort(int arr[],int n)
{
	int i, j;
    
    for (i = 0; i < n - 1; i++) 
	{
        
        for (j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
  
        
    }
}

int main()
{
		int n=100000;
		int arr[n];

	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%n;
	}
	
          cout<<"Time before sorting of Random number"<<endl;
     time_t ttime = time(0);
     char* dt = ctime(&ttime);
     cout << "The current local date and time is: " << dt << endl;
 

 
	   Bubblesort(arr,n);
	   
	   cout<<"time after sorting of random number"<<endl;
	
    	ttime=time(0);
	  char* dtt= ctime(&ttime);
      cout << "The current local date and time is: " << dtt << endl;
     
    /* for(int i=0;i<n;i++)
     {
     	cout<<arr[i]<<" ";
	 }
	 cout<<endl;*/
	 Bubblesort(arr,n);
	 cout<<"time after sorting of sorted array"<<endl;
	 
	 ttime=time(0);
	  char* dttt= ctime(&ttime);
      cout << "The current local date and time is: " << dttt << endl;
      
      reverse(arr,n);
      cout<<"time before reverse sorting"<<endl;
      ttime=time(0);
	  char* dtttt= ctime(&ttime);
      cout << "The current local date and time is: " << dtttt<< endl;
      
      Bubblesort(arr,n);
      cout<<"time after reverse sorting "<<endl;
      ttime=time(0);
	  char* dttttt= ctime(&ttime);
      cout << "The current local date and time is: " << dttttt << endl;
 
}
