// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int src, vector<int> adj[], vector<int> &vis, vector<int> &ans){
        
        vis[src] = 1;
        ans.push_back(src);
        
        for(auto x : adj[src]){
            if(!vis[x]){
                dfs(x,adj,vis,ans);
            }
        }
        
        return;
        
    }
    
    
    
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> ans;
        
        vector<int> vis(V, 0);
        
        
        dfs(0,adj,vis,ans);
        
        return ans;
        // Code here
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends