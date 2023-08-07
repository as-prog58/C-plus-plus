#include<iostream>
#include<set>

#include<vector>

using namespace std;

 void findDisappearedNumbers(vector<int>& nums) {

        set<int>p;
        set<int >::iterator it ;
        int l=nums.size();
        int i;
        for(i=0;i<l;i++)
        {
            p.insert(nums[i]);
        }
         for(i=0;i<l;i++)
        {
            nums.pop_back();
        }
         
        // for(it=p.begin();it!=p.end();it++)
       //  cout<<*it<<" ";
        
      
      
          for(i=1,it=p.begin();i<=l&&it!=p.end();i++)
          {
                  if(*it==i)
                  {
                      it++;
                      i++;
                  }
                  else
                  {
                      nums.push_back(i);
                      i++;
                  }
          }
       
       // return nums;
        
    }
    
    int main()
    {
    	vector<int> p;
    	int i;
    	cout<<"enter"<<endl;
    	int n;
    	cin>>n;
    	cout<<"enter "<<n<<" elements"<<endl;
    	for(i=0;i<n;i++)
    	{
    		int num;
    		cin>>num;
    		p.push_back(num);
		}
    //	p=findDisappearedNumbers(p);
    	for(i=0;i<p.size();i++)
    	cout<<p[i]<<" ";
    	
	}
