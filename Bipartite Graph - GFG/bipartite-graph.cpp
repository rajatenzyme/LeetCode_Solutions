// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
    bool dfs(int x, vector<int> adj[], vector<int> &color){
        
        if(color[x]==-1)
            color[x] = 1;
        
        for(auto it : adj[x]){
            if(color[it] == -1){
                color[it] = 1 - color[x];
                if(!dfs(it, adj, color))
                    return false;
            }
            else if(color[it] == color[x]){
                return false;
            }
        }
        return true;
        
    }
    
public:
	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int> color(V, -1);
	    
	    
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(!dfs(i, adj, color))
	                return false;
	        }
	    }
	    
	    return true;
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends