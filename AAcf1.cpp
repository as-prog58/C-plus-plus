#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;




const int mod = 1e9 + 7;
// const int mod = 998244353;





signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) 
	{
		 long long int n;
    cin>>n;
    vector<long long int >arr(n);
    long long int i,j;
    for( i=0;i<n;i++)
    cin>>arr[i];
    int cnt=0;
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n&&arr[j]>arr[i];j++)
    	{
    		if(j-i==arr[j]-arr[i])
    		cnt++;
		}
	}
	
	cout<<cnt<<endl;
	}
    return 0;

}
