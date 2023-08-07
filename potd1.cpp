
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;




class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        int i,c=0;
        if(n>0)
        {
            if(seats[0]==0&&seats[1]==0)
            {
                seats[0]=1;
                n--;
                
            }
        }
        for(i=1;i<(m-1)&&n!=0;i++)
        {
            if(seats[i]=0 && seats[i+1]==0 && seats[i-1]==0)
              {
                              seats[i]=1;
                              n--;
              }
            
        }
        
        if(n>0)
        {
            if(seats[m-2]==0&&seats[m-1]==0)
            {
                seats[m-1]=1;
                n--;
            }
        }
        if(n==0) 
        return true;
        else
        return false;
    }
};

//{ Driver Code Starts.

int main(){

   
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    
}

// } Driver Code Ends
