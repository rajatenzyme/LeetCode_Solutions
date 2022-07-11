class Solution {
public:
    bool checkBi(int node, vector<int> &color, vector<vector<int>> adj){
        //if(color[node] == -1) 
            color[node] = 1;
        
        queue<int> q;
        q.push(node);
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto x : adj[curr]){
                if(color[x] == -1){
                    color[x] = 1 - color[curr];
                    q.push(x);
                }
                else if(color[x] == color[curr])
                    return false;
            }
        }
        return true;
    }
    
    
    
    bool isBipartite(vector<vector<int>>& B) {
        int V = B.size();
        
        // vector<int> adj[V];
        // for(int i=0;i<B.size();i++){
        //     adj[B[i][0]].push_back(B[i][1]);
        //     adj[B[i][1]].push_back(B[i][0]);
        // }
        
        vector<int> color(V, -1);
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(!checkBi(i,color,B)){
                    return false;
                }
            }
        }
        return true;
    }
};