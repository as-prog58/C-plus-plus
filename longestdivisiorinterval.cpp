#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;




const int mod = 1e9 + 7;
// const int mod = 998244353;



void solve(){   

    long long int n;
    cin>>n;
    long long int arr[n];
    long long int i,j;
    for( i=0;i<n;i++)
    cin>>arr[i];
    long long int cnt=0;
    for(i=1;i<n;i++)
    {
    	if(arr[i]<arr[i-1])
    	{
			for(j=0;j<n;j++)
			  arr[j]=max(arr[j]-1,(long long int)0);
    	 cnt++;
    	 continue;
		}
    
	}
	
    cout<<cnt<<endl;
    
}     



signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}
