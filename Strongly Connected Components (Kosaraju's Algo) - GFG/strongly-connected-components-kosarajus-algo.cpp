// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


void Topo(int src, stack<int> &st, vector<int>&vis, vector<int>adj[]){
    
    vis[src] = 1;
    
    for(auto x : adj[src]){
        if(!vis[x]){
            Topo(x,st,vis,adj);
        }
    }
    
    st.push(src);
}


void dfs(int src, vector<int>&vis, vector<int>adj[]){
    
    vis[src] = 1;
    
    for(auto x : adj[src]){
        if(!vis[x]){
            dfs(x,vis,adj);
        }
    }
    
}


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int> st;
        vector<int> vis(V,0);
        
        //Topo-Sort
        for(int i=0;i<V;i++){
            if(!vis[i])
                Topo(i,st,vis,adj);
        }
        
        
        //Transpose the graph
        
        vector<int> transposed[V];
        
        for(int i=0;i<V;i++){
            vis[i] = 0;
            for(auto x : adj[i]){
                transposed[x].push_back(i);
            }
        }
        
        int c = 0;
        while(!st.empty()){
            int x = st.top();
            st.pop();
            if(!vis[x]){
                c++;
                dfs(x,vis,transposed);
            }
        }
        
        return c;
        
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends