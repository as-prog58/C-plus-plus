#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<stack>

#include<iterator>
using namespace std;

class Graph
{
    int V;
    vector<list<int>>adj;

    public:
    Graph(int v)
    {
        V=v;
        adj.resize(v);
    }

    void addEdge(int u,int v)
    {
       adj[u].push_back(v);
       
       
    }

   void BFS(int s)
   {
       vector<int>vis;
     vis.resize(V,0);
     queue<int>q;
      vis[s]=1;

    q.push(s);
    

    while(q.empty()==0)
    {
        s=q.front();
        q.pop();
        cout<<s<<" ";

        list<int>:: iterator  i;
        for(i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(vis[*i]==0)
            {
                 q.push(*i);
                 vis[*i]=1;
            }
            
        }
    }




   }

    void DFS(int s)
    {
        vector<bool>vis;
        vis.resize(V,false);
        stack<int>stack;
        stack.push(s);
        cout<<"\n DFS of graph is :-- ";

        while(!stack.empty())
        {
          s=stack.top();
          stack.pop();
           if (!vis[s])
           {
            cout << s << " ";
            vis[s] = true;
           }
           for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!vis[*i])
                stack.push(*i);
        }    
        
    }

    void print_List()
    {
        int i;
        list<int>:: iterator j;
        for(i=0;i<V;i++)
        {
            cout<<i<<" -> ";
            for(j=adj[i].begin();j!=adj[i].end();j++)
            {
                cout<<*j<<" ";
               
            }
            cout<<endl;
        }
    }



};

int main()
{
   Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	//g.BFS(2);
    //g.DFS(2);
    g.print_List();

    return 0;
}



